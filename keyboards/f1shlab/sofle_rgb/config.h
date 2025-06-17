// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

//#define USE_MATRIX_I2C
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

/* Select hand configuration */
#define SPLIT_HAND_PIN GP9

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define SPLIT_TRANSPORT_MIRROR

#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE
