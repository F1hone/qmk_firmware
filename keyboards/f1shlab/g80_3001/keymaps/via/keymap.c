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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_fullsize_ansi(
		KC_LGUI, KC_G,  KC_F4,   KC_ESC, KC_H,           KC_QUOT,  KC_F6,   KC_F5,   KC_LALT,  KC_UP,             KC_P0,   KC_PDOT,                   KC_NUBS,
		         KC_V,  KC_C,    KC_Z,   KC_M,  KC_DOT,  KC_BSLS,  KC_COMM, KC_ENT,            KC_PAUS,  KC_NUM,  KC_PSLS, KC_PAST, KC_RSFT, KC_RCTL, KC_X,
		         KC_4,  KC_3,    KC_1,   KC_7,  KC_9,    KC_0,     KC_8,    KC_F10,  KC_PSCR,  KC_END,   KC_F11,  KC_F12,  KC_PGDN,                   KC_2,
		         KC_5,  KC_F2,   KC_GRV, KC_6,  KC_F8,   KC_MINS,  KC_EQL,  KC_F9,             KC_HOME,  KC_DEL,  KC_INS,  KC_PGUP,          KC_LCTL, KC_F1,
	             KC_R,  KC_E,    KC_Q,   KC_U,  KC_O,    KC_P,     KC_I,             KC_SCRL,  KC_PPLS,  KC_P7,   KC_P8,   KC_P9,                     KC_W,
		         KC_T,  KC_F3,   KC_TAB, KC_Y,  KC_F7,   KC_LBRC,  KC_RBRC, KC_BSPC,           KC_APP,   KC_P4,   KC_P5,   KC_P6,   KC_LSFT,          KC_CAPS,
		         KC_F,  KC_D,    KC_A,   KC_J,  KC_L,    KC_SCLN,  KC_K,    KC_BSLS,           KC_PENT,  KC_P1,   KC_P2,   KC_P3,                     KC_S,
		         KC_B,                   KC_N,           KC_SLSH,           KC_SPC,  KC_LALT,  KC_LEFT,  KC_DOWN, KC_RGHT, KC_PMNS,                              KC_LGUI),
  [1] = LAYOUT_fullsize_ansi(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,                   KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
		         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
		         KC_TRNS,                   KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS)
};
