 /* Copyright 2021 Weirdo
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
#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, A5, A6, A7, B0, B1 }
#define MATRIX_COL_PINS { B6, A1, A2, A3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* enable the nkro when using the VIA. */
#define FORCE_NKRO

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define DYNAMIC_KEYMAP_LAYER_COUNT 5




