
#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1, F5, F4, F6 }
#define MATRIX_COL_PINS { F7, E6, B2, D7, D6, D5, D4, D3, D2, D1, D0, B7, B6, B5, B4, B3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
