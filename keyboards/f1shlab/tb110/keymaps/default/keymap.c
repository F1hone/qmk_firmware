/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_tb110(
		KC_SLCK,  KC_Q,   KC_E,  KC_R,  KC_U,  KC_I,    KC_O,    KC_P,     KC_PSCR,  KC_4,    KC_P7,    KC_P8,            KC_P9,    KC_PPLS,                      KC_W,
		          KC_TAB, KC_F3, KC_T,  KC_Y,  KC_RBRC, KC_F7,   KC_LBRC,  KC_1,     KC_BSPC, KC_P4,    KC_P5,            KC_P6,              KC_LSFT,  KC_LGUI,  KC_CAPS,
		          KC_A,   KC_D,  KC_F,  KC_J,  KC_K,    KC_L,    KC_SCLN,  KC_2,     KC_BSLS, KC_P1,    KC_P2,   KC_RGUI, KC_P3,    KC_PENT,  KC_RSFT,            KC_S,
		          KC_ESC, KC_F4, KC_G,  KC_H,  KC_F6,            KC_QUOT,  KC_LALT,  KC_F11,  KC_SPC,   KC_P0,            KC_PDOT,  KC_UP,
		KC_RCTL,  KC_Z,   KC_C,  KC_V,  KC_M,  KC_COMM, KC_DOT,  MO(1),     KC_3,     KC_ENT,  KC_PAUS,  KC_PSLS,          KC_PAST,                                KC_X,
		                         KC_B,  KC_N,           KC_APP,  KC_SLSH,  KC_RALT,  KC_F12,  KC_DOWN,  KC_RGHT,          KC_PMNS,  KC_LEFT,
		KC_LCTL,  KC_GRV, KC_F2, KC_5,  KC_6,  KC_EQL,  KC_F8,   KC_MINS,  KC_NUM,   KC_F9,   KC_DEL,   KC_INS,           KC_PGUP,  KC_HOME,                      KC_F1,
		KC_F5,    KC_1,   KC_3,  KC_4,  KC_7,  KC_8,    KC_9,    KC_0,     KC_DEL,   KC_F10,                              KC_PGDN,  KC_END,                       KC_2),

  [1] = LAYOUT_tb110(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,                   KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
	             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                            KC_TRNS,
		                           KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,                   KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS,                   KC_TRNS)
};
