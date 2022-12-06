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
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F6, F7 }
#define MATRIX_COL_PINS { F5, B1, B3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Define capslock and numlock scroll_lock */
#define LED_NUM_LOCK_PIN  D5
#define LED_CAPS_LOCK_PIN  B0
// #define LED_SCROLL_LOCK_PIN  A3
#define LED_PIN_ON_STATE 0

/* NKRO */
#ifdef NKRO_ENABLE
#         define FORCE_NKRO
#endif

/* Oled */
#ifdef OLED_ENABLE
#define OLED_DISPLAY_128X32
#define I2C1_SCL_PIN        D0
#define I2C1_SDA_PIN        D1
#define OLED_BRIGHTNESS 128
#endif

/* Encoder */
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10
#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B3 }
// #define ENCODER_DIRECTION_FLIP

/* joystick support */
/* Joystick pins */
// #define JOYSTICK_X_PIN B5
// #define JOYSTICK_Y_PIN B4
// Max 32
#   define JOYSTICK_BUTTON_COUNT 0
// Max 6: X, Y, Z, Rx, Ry, Rz
#   define JOYSTICK_AXES_COUNT 2
// Between 8-16
// #   define JOYSTICK_AXES_RESOLUTION 8


