/*Copyright 2019 coseyfannitutti

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

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
/*                         0   1   2   3   4  5   6   7   8   9   10  11  12  13  14  15  16  */
#define MATRIX_ROW_PINS { C2, C3, C7, C4, C6, C5 }
#define MATRIX_COL_PINS { A0, B0, A1, B1, A2, B2, A3, B3, A4, B4, A5, A6, A7, D6, D1, D0, D7 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define LED_CAPS_LOCK_PIN   B6
#define LED_SCROLL_LOCK_PIN B7
#define LED_PIN_ON_STATE 0

#define BACKLIGHT_PIN D4
#define BACKLIGHT_LEVELS 10
#define BACKLIGHT_DEFAULT_LEVEL 5
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LIMIT_VAL 220

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
