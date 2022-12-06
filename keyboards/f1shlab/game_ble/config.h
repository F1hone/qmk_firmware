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

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1, F4, F5}
#define MATRIX_COL_PINS { B0, B7, D0, D1, D2, D3, D5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Encoder */
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10
#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { C7 }
// #define ENCODER_DIRECTION_FLIP

/* joystick support */
#ifdef JOYSTICK_ENABLE
#   define JOYSTICK_AXES_COUNT 2
#   define JOYSTICK_BUTTON_COUNT 1
#   define JOYSTICK_AXES_RESOLUTION 8
#endif

