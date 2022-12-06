#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDE29
#define PRODUCT_ID      0x7312
#define DEVICE_VER      0x0003
#define MANUFACTURER    zhn
#define PRODUCT         kb

/* Bootmagic & DFU */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { B0, B7, D0, D1, D2, D3, D5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/*Bluetooh*/
#ifdef BLUETOOTH_ENABLE
#define BLUEFRUIT_LE_RST_PIN D4
#define BLUEFRUIT_LE_CS_PIN B4
#define BLUEFRUIT_LE_IRQ_PIN E6
#define BATTERY_LEVEL_PIN B5
#define BATTERY_LEVEL_POLL 5000
#define LED_LOW_BATTERY_PIN D6
#endif


/*JOYstick*/
#define JOYSTICK_AXES_RESOLUTION 12
// Max 32
#define JOYSTICK_BUTTON_COUNT 8
// Max 6: X, Y, Z, Rx, Ry, Rz
#define JOYSTICK_AXES_COUNT 3



/*encoder*/
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { D7 }



/* VIA */
#ifdef VIA_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif
