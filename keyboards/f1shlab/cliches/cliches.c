/*
Copyright 2023 F1shlab
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
#include "cliches.h"

led_config_t g_led_config = {
    {
        {0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,  11,  12,  13},
        {14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27},
        {28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,   NO_LED},
        {41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,   NO_LED},
        {54,  55,  56,   NO_LED,  57,   NO_LED,   NO_LED,  58,   NO_LED,   NO_LED,  59,  60,  61,   NO_LED}
    },
    {
        {0,0}, {17,0}, {34,0}, {52,0}, {69,0}, {86,0}, {103,0}, {121,0}, {138,0}, {155,0}, {172,0}, {190,0}, {207,0}, {224,0},
        {0,16},{17,16},{34,16},{52,16},{69,16},{86,16},{103,16},{121,16},{138,16},{155,16},{172,16},{190,16},{207,16},{224,16},
        {0,32},{17,32},{34,32},{52,32},{69,32},{86,32},{103,32},{121,32},{138,32},{155,32},{172,32},{190,32},{207,32},
        {0,48},{17,48},{34,48},{52,48},{69,48},{86,48},{103,48},{121,48},{138,48},{155,48},{172,48},{190,48},{207,48},
        {0,64},{17,64},{34,64},        {69,64},                 {121,64},                  {172,64},{190,64},{207,64},
        {224,64},{149,64},{75,64},{0,64},
        {0,0},{75,0},{149,0},{224,0}
    },
    {
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1,
      8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1,
      1, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1,
      1, 1, 1,    1,       1,       1, 1, 1,
      2, 2, 2, 2, 2, 2, 2, 2
    }
};

#if defined(RGB_MATRIX_ENABLE) && defined(CAPS_LOCK_LED_INDEX)

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_user(keycode, record)) { return false; }
    switch (keycode) {
#ifdef RGB_MATRIX_ENABLE
        case RGB_TOG:
            if (record->event.pressed) {
                switch (rgb_matrix_get_flags()) {
                    case LED_FLAG_ALL: {
                        rgb_matrix_set_flags(LED_FLAG_NONE);
                        rgb_matrix_set_color_all(0, 0, 0);
                    } break;
                    default: {
                        rgb_matrix_set_flags(LED_FLAG_ALL);
                    } break;
                }
            }
            if (!rgb_matrix_is_enabled()) {
                rgb_matrix_set_flags(LED_FLAG_ALL);
                rgb_matrix_enable();
            }
            return false;
#endif
    }
    return true;
}

bool rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    if (!rgb_matrix_indicators_advanced_user(led_min, led_max)) { return false; }
    // RGB_MATRIX_INDICATOR_SET_COLOR(index, red, green, blue);

    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX, 255, 0, 166);
    } else {
        if (!rgb_matrix_get_flags()) {
           RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX, 0, 0, 0);
        }
    }
    return true;
}

#endif // CAPS_LOCK_LED_INDEX
