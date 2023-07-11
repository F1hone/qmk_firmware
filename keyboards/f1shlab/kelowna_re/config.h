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

#define WS2812_PWM_DRIVER PWMD3  // default: PWMD2
#define WS2812_PWM_CHANNEL 1  // default: 2
#define WS2812_PWM_PAL_MODE 2  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM3  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 3  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.

# define RGBLED_NUM 80
# define RGB_MATRIX_LED_COUNT RGBLED_NUM
# define RGB_DISABLE_WHEN_USB_SUSPENDED
# define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
# define RGB_MATRIX_DEFAULT_VAL 125
# define RGBLIGHT_VAL_STEP 20

# define RGB_MATRIX_KEYPRESSES
# define RGB_MATRIX_FRAMEBUFFER_EFFECTS

/* Enable CapsLcok LED */
#define CAPS_LOCK_LED_INDEX 28

// #define DYNAMIC_KEYMAP_MACRO_COUNT 30
