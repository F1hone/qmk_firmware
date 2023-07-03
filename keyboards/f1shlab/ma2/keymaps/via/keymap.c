 /* Copyright 2023 F1shlab
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_B,       A(KC_F),  C(A(KC_P)),      A(KC_A), C(KC_A), C(A(KC_H)),    C(KC_F12), KC_F12, C(A(KC_B)),        C(KC_B),
        C(A(KC_F)), C(KC_S),  KC_O,            KC_V,    A(KC_E), A(KC_G),       C(KC_G),
        C(A(KC_T)), A(KC_T),  C(KC_O),         A(KC_P), KC_M,    KC_P,          C(KC_C),
        A(KC_D),    C(KC_L),  C(A(KC_D)),      A(KC_S), A(KC_C), KC_X,
        C(A(KC_G)), C(KC_P),  C(KC_G),         KC_C,    KC_F,    KC_G,          C(KC_M),
        C(KC_T),    KC_ESC,           KC_P7,   KC_P8,   KC_P9,   KC_PPLS,       C(KC_F),   KC_H,   C(A(KC_S)),        RGB_MOD,
        KC_E,    	KC_BSPC,          KC_P4,   KC_P5,   KC_P6,   KC_PSLS,
        KC_U,       KC_DEL,           KC_P1,   KC_P2,   KC_P3,   KC_PMNS,                  KC_UP,                     C(KC_U),
                                      KC_P0,   KC_PDOT, KC_I,    KC_A,          KC_LEFT,   KC_END, KC_RGHT,           A(KC_U),
        KC_S,                         KC_LSFT,                   KC_ENT,                   KC_DOWN,                   KC_L,

        KC_F1,      KC_F2,    KC_F3,    KC_F4,    KC_F5,         KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,      C(KC_PGDN),
        C(KC_F1),   C(KC_F2), C(KC_F3), C(KC_F4), C(KC_F5),      C(KC_F6), C(KC_F7), C(KC_F8), C(KC_F9), C(KC_F10),   C(KC_PGUP)
    ),
    [1] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
        XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,
        XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX,               XXXXXXX,
                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX,XXXXXXX,       XXXXXXX,
        XXXXXXX,              XXXXXXX,                   XXXXXXX,              XXXXXXX,               XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )
};
