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
#include "quantum.h"

void board_init(void) {
   //JTAG-DP Disabled and SW-DP Enabled
   AFIO->MAPR = (AFIO->MAPR & ~AFIO_MAPR_SWJ_CFG_Msk) | AFIO_MAPR_SWJ_CFG_DISABLE;
}

static uint16_t buzzer_timer = 0;
static uint8_t buzzer_dwell = 15;
static uint8_t buzzer_dwell_change = 1;
static bool buzzer_on = false;
static bool buzzer_active = false;

static bool initial_keypress = false;

enum custom_keycodes{
    KC_HPTON = QK_KB_0,
    KC_HPTOFF,
    KC_HPTTOG,
    KC_HPTRST,
    KC_HPTFBK,
    KC_HPTCONT,
    KC_HPTDWLI,
    KC_HPTDWLD,
    KC_BZTOG,
    KC_BZRST,
    KC_BZDWLI,
    KC_BZDWLD
};

// Documentation: custom_quantum_functions.md
void keyboard_post_init_kb(void){
    setPinOutput(BUZZER_PIN);
    keyboard_post_init_user();
}

void housekeeping_task_kb(void){
    if(buzzer_on){
        if(buzzer_active && timer_elapsed(buzzer_timer) > buzzer_dwell){
        buzzer_active = false;
        writePinLow(BUZZER_PIN);
        }
    }
    housekeeping_task_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed){                         // true when pressed, false when released
        initial_keypress = true;

        if(buzzer_on){
            if(!buzzer_active){
                buzzer_active = true;
                buzzer_timer = timer_read();
                writePinHigh(BUZZER_PIN);
            }
        }

        switch (keycode) {
            #ifdef HAPTIC_ENABLE
            case KC_HPTON:
                haptic_enable();
                break;

            case KC_HPTOFF:
                haptic_disable();
                break;

            case KC_HPTTOG:
                haptic_toggle();
                break;

            case KC_HPTRST:
                haptic_reset();
                break;

            case KC_HPTFBK:
                haptic_feedback_toggle();
                break;

            case KC_HPTCONT:
                haptic_toggle_continuous();
                break;

            case KC_HPTDWLI:
                haptic_dwell_increase();
                break;

            case KC_HPTDWLD:
                haptic_dwell_decrease();
                break;
            #endif

            case KC_BZTOG:
                buzzer_on = !buzzer_on;
                if(buzzer_on == true){
                    buzzer_active = true;
                    buzzer_timer = timer_read();
                    writePinHigh(BUZZER_PIN);
                }
                else{
                    writePinLow(BUZZER_PIN);
                }
                break;

            case KC_BZRST:
                buzzer_dwell = 12;
                break;

            case KC_BZDWLI:
                buzzer_dwell += buzzer_dwell_change;
                break;

            case KC_BZDWLD:
                if(buzzer_dwell - buzzer_dwell_change > 1){
                    buzzer_dwell -= buzzer_dwell_change;
                }
                break;
        }
    }
    return process_record_user(keycode, record);
}
