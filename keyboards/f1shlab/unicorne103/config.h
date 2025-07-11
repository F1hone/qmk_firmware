// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

// #   define WS2812_PWM_DRIVER PWMD3
// #   define WS2812_PWM_CHANNEL 1
// #   define WS2812_DMA_STREAM STM32_DMA1_STREAM3
// #   define WS2812_DMA_CHANNEL 3

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_ALPHAS_MODS

#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN B6
#define I2C1_SDA_PIN B7

/* Serial configuration for split keyboard. */
#define SERIAL_USART_TX_PIN A9

// #define MASTER_LEFT
// #define AUDIO_PIN GP28
// #define AUDIO_PWM_DRIVER PWMD6
// #define AUDIO_INIT_DELAY
// #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
// #define STARTUP_SONG SONG(ODE_TO_JOY)

// #define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
// #define ANALOG_JOYSTICK_X_AXIS_PIN GP27
// #define POINTING_DEVICE_INVERT_Y
// #define POINTING_DEVICE_INVERT_X
