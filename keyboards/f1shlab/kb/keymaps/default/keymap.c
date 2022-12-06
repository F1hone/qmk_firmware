#include "kb.h"
#include "analog.h"
#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_ESC, KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,
		KC_LCTL, KC_LSFT, KC_Q, KC_W, KC_E, KC_R, KC_T,
		KC_CAPS, MO(1), KC_A, KC_S, KC_D, KC_F, KC_G,
		KC_NO, KC_I, KC_Z, KC_X, KC_C, KC_V, KC_SPC,
		KC_UP, KC_DOWN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),


	[1] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_VOLU, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

/* Encoders */
bool encoder_update_user(uint8_t index, bool clockwise) {
  if(index == 0){
		if(clockwise){
			tap_code(dynamic_keymap_get_keycode(biton32(layer_state),4,0));
		}else{
			tap_code(dynamic_keymap_get_keycode(biton32(layer_state),4,1));
		}
	}
	return true;
    }
