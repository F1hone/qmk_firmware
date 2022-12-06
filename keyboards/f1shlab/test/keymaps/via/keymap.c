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
#include QMK_KEYBOARD_H

#include "analog.h"

#include "joystick.h"

#include "analog.h"

char arrow_keys[4] = {KC_UP, KC_LEFT, KC_DOWN, KC_RIGHT}; // up, left, down, right
static int actuation = 200; // actuation point for arrows (0-511)
bool arrows[4];


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_all(
		MO(1),    KC_2,    KC_MUTE,
		KC_3,     KC_4,    KC_UP,
        KC_LEFT,  KC_DOWN, KC_RGHT
		),
	[1] = LAYOUT_all(
		KC_TRNS,  KC_TRNS, KC_TRNS,
		KC_TRNS,  KC_TRNS, KC_MS_U,
        KC_MS_L,  KC_MS_D, KC_MS_R
		),
	[2] = LAYOUT_all(
		KC_TRNS,  KC_TRNS, KC_TRNS,
		KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS
		),
	[3] = LAYOUT_all(
		KC_TRNS,  KC_TRNS, KC_TRNS,
		KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS
		),
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0]  = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [2]  = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [3]  = {ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)}
};

// #ifdef ENCODER_ENABLE
// bool encoder_update_user(uint8_t index, bool clockwise) {
//     uint16_t keycode = 0;
//     if (clockwise) {
//         keycode = dynamic_keymap_get_keycode(biton32(layer_state), 4, 3);
//     } else {
//         keycode = dynamic_keymap_get_keycode(biton32(layer_state), 4, 4);
//     }
//     if (keycode >= MACRO00 && keycode <= MACRO15) {
//         dynamic_keymap_macro_send(keycode - MACRO00);
//     } else {
//         tap_code16(keycode);
//     }
//     return false;
// }

// #endif

// /* Joystick axes settings */
// joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
//     [0] = JOYSTICK_AXIS_IN(JOYSTICK_X_PIN, 268, 514, 813),
//     [1] = JOYSTICK_AXIS_IN(JOYSTICK_Y_PIN, 865, 519, 260)
// };

void matrix_scan_user(void){

            if (!arrows[0] && analogReadPin(B4) - 512 > actuation){
            arrows[0] = true;
            //register_code16(KC_UP);'
            uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 1,2);
            register_code16(keycode);

            }
            else if (arrows[0] &&  analogReadPin(B4) - 512 < actuation){
            arrows[0] = false;
            uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 1,2);
            unregister_code16(keycode);

            }
            //下
            if (!arrows[1] && analogReadPin(B4) - 512 < -actuation){
            arrows[1] = true;
            //register_code16(KC_DOWN);
            uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 2,1);
            register_code16(keycode);
            // register_code16(keymaps[0][4][4]);
            //register_code16(dynamic_keymap_get_keycode(0,4,4));
            }
            else if (arrows[1] && analogReadPin(B4) - 512 > -actuation){
            arrows[1] = false;
            //unregister_code16(KC_DOWN);
            //                     unregister_code16(keymaps[0][4][4]);
            uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 2,1);
            unregister_code16(keycode);
            // unregister_code16(dynamic_keymap_get_keycode(0,4,4));
            }
            //左
            if (!arrows[2] && analogReadPin(B5) - 512 > actuation){
            arrows[2] = true;
            uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 2,0);
            register_code16(keycode);
            //register_code16(KC_LEFT);
            //                    register_code16(keymaps[0][4][6]);
            }
            else if (arrows[2] &&  analogReadPin(B5) - 512 < actuation){
            arrows[2] = false;
            uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 2,0);
            unregister_code16(keycode);
            //unregister_code16(KC_LEFT);
            //                     unregister_code16(keymaps[0][4][6]);
            }

            //右
            if (!arrows[3] && analogReadPin(B5) - 512 < -actuation){
            arrows[3] = true;
            //register_code16(KC_RIGHT);
            //                     register_code16(keymaps[0][4][7]);
            uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 2,2);
            register_code16(keycode);
            }
            else if (arrows[3] && analogReadPin(B5) - 512 > -actuation){
            arrows[3] = false;
            // unregister_code16(KC_RIGHT );
            uint16_t keycode = dynamic_keymap_get_keycode(biton32(layer_state), 2,2);
            unregister_code16(keycode);

            }

};


//joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_VIRTUAL,
    [1] = JOYSTICK_AXIS_VIRTUAL
};
