/*
Copyright 2021 0xCB - Conor Burns

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
// clang-format off

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 9

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
#define MATRIX_ROW_PINS { B12, B13, B14, B15 }
#define MATRIX_COL_PINS { A1, A2, A3, A4, A5, A6, A7, B0, B1 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { B8 }
#define ENCODERS_PAD_B { B9 }
#define TAP_CODE_DELAY 10
#define ENCODER_RESOLUTION 4

// clang-format on
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* oled custom font */
#define OLED_FONT_END 255
#define OLED_FONT_H "gfxfont.c"

/* bootmagic */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#ifdef OLED_ENABLE
    /* Mapping I2C2 for OLED */
    #define I2C1_SCL_PIN B6
    #define I2C1_SDA_PIN B7
    #define I2C_DRIVER I2CD1

#endif
