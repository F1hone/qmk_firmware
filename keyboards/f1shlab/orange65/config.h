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
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { B10, A5, A6, B14, B0 }
#define MATRIX_COL_PINS { B14, A8, A10, A15, B3, B4, B5, B7, A1, A2, A3, A4, B1, B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

// #define LED_CAPS_LOCK_PIN C13
// #define LED_PIN_ON_STATE    0

/* enable the nkro when using the VIA. */
#define FORCE_NKRO

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#ifdef OLED_ENABLE
#define OLED_DISPLAY_128X32
#define I2C1_SCL_PIN        B8
#define I2C1_SDA_PIN        B9
#define OLED_BRIGHTNESS 128

#endif

// #ifdef RGBLIGHT_ENABLE

#    define RGB_DI_PIN A7
#    define RGBLED_NUM 7
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 10
#    define RGBLIGHT_LIMIT_VAL 255
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
#    define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL/2
#    define RGBLIGHT_LAYERS 3
// #endif


