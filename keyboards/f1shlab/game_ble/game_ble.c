/*
Copyright 2022 F1shlab

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "game_ble.h"

#include QMK_KEYBOARD_H

#ifdef BLUETOOTH_ENABLE
#include <stdio.h>
#include "bluefruit_le.h"

uint8_t bluefruit_le_read_battery_level(void) {
  float min_voltage = 3.2;
  float max_voltage = 4.2;
  float voltage     = bluefruit_le_read_battery_voltage() * 2 * 3.3 / 1024;
  if (voltage <= min_voltage) {
    return 0;
  };
  if (voltage >= max_voltage) {
    return 100;
  }
  return (voltage - min_voltage) / (max_voltage - min_voltage) * 100;
}

void tap_battery_level(void) {
  char result[4];
  snprintf(result, sizeof(result), "%d", bluefruit_le_read_battery_level());
  send_string(result);
}

void set_low_battery_led(void) {
  bool low_battery = bluefruit_le_read_battery_level() < 25;
  writePin(LED_LOW_BATTERY_PIN, low_battery);
}
#endif

void matrix_scan_kb(void) {
#ifdef BLUETOOTH_ENABLE
  static uint16_t counter = BATTERY_LEVEL_POLL;
  counter++;
  if (counter > BATTERY_LEVEL_POLL) {
    counter = 0;
    set_low_battery_led();
  }
#endif
  matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DG_BATT:
      if (record->event.pressed) {
#ifdef BLUETOOTH_ENABLE
        tap_battery_level();
#endif
      }
      break;
  }
  return process_record_user(keycode, record);
}
bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}


#ifdef JOYSTICK_ENABLE
    /* Joystick pins */
#   ifndef JOYSTICK_X_PIN
#       define JOYSTICK_X_PIN D7
#       define JOYSTICK_Y_PIN B6
#   endif

    // /* Joystick + Encoder fix */
    // void keyboard_post_init_kb(void) {
    //     if (is_keyboard_master()) {
    //         writePinLow(JOYSTICK_X_PIN);
    //         writePinLow(JOYSTICK_Y_PIN);
    //     }
    // }

    /* Joystick axes settings */
    joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
        [0] = JOYSTICK_AXIS_IN(JOYSTICK_X_PIN, 268, 514, 813),
        [1] = JOYSTICK_AXIS_IN(JOYSTICK_Y_PIN, 865, 519, 260)
    };
#endif

// /* joystick config */
// joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
//     [0] = JOYSTICK_AXIS_IN(B5, 1023, 512, 0),
//     [1] = JOYSTICK_AXIS_IN(B4, 0, 512, 1023)
// };

