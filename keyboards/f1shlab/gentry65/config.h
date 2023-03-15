/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_COL_PINS { B8, B7, B6, B5, B4, B3, B11, A15, A9, A10, B13, B14, B12, A5, A4 }
#define MATRIX_ROW_PINS { B10, B1, B0, A7, A6 }

#define DIODE_DIRECTION COL2ROW


#define LED_CAPS_LOCK_PIN  B15
#define LED_PIN_ON_STATE 0

