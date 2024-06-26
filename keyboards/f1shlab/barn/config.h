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

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { B10, A5, A6, A7, B0 }
#define MATRIX_COL_PINS { B14, A8, A10, A15, B3, B4, B5, B7, A1, A2, A3, A4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* enable the nkro when using the VIA. */
#define FORCE_NKRO

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10
#define ENCODERS_PAD_A  { B1 }
#define ENCODERS_PAD_B  { B2 }

/* Bootmagic Lite setting 0,1  */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 1
