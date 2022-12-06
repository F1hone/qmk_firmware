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

#include "max_108.h"

#ifdef RGB_MATRIX_ENABLE

/* globol var store in eeprom for key and underground rgb switch */
typedef union {
    uint32_t raw;
    uint8_t underground_rgb_sw :8;
} kb_cums_t;
kb_cums_t kb_cums;

led_config_t g_led_config = {
    {
        {0,   NO_LED,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,  11,  12,  13,  14,  15,  16,  17,  18,   NO_LED},
        {19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39},
        {40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60},
        {61,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,   NO_LED,   NO_LED,   NO_LED,   NO_LED,  74,  75,  76,   NO_LED},
        {77,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,   NO_LED,  88,   NO_LED,   NO_LED,  89,   NO_LED,  90,  91,  92,  93},
        {94,  95,  96,   NO_LED,   NO_LED,  97,   NO_LED,   NO_LED,   NO_LED,  98,  99,  100,   NO_LED,  101,  102,  103,  104,  105,   NO_LED,  106,   NO_LED},
    },
    {
        {0,0},       {22,0},{34,0},{45,0},{56,0},{67,0},{78,0},{90,0},{101,0},{112,0},{123,0},{134,0},{146,0},{157,0},{168,0},{179,0},{190,0},{202,0},{213,0},
        {0,13},{11,13},{22,13},{34,13},{45,13},{56,13},{67,13},{78,13},{90,13},{101,13},{112,13},{123,13},{134,13},{146,13},{157,13},{168,13},{179,13},{190,13},{202,13},{213,13},{224,13},
        {0,26},{11,26},{22,26},{34,26},{45,26},{56,26},{67,26},{78,26},{90,26},{101,26},{112,26},{123,26},{134,26},{146,26},{157,26},{168,26},{179,26},{190,26},{202,26},{213,26},{224,26},
        {0,38},{11,38},{22,38},{34,38},{45,38},{56,38},{67,38},{78,38},{90,38},{101,38},{112,38},{123,38},{134,38},                            {190,38},{202,38},{213,38},
        {0,51},{11,51},{22,51},{34,51},{45,51},{56,51},{67,51},{78,51},{90,51},{101,51},{112,51},       {134,51},              {168,51},       {190,51},{202,51},{213,51},{224,51},
        {0,64},{11,64},{22,64},              {56,64},                     {101,64},{112,64},{123,64},       {146,64},{157,64},{168,64},{179,64},{190,64},       {213,64},
    },
    {
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4
    }
};

void rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    if (rgb_matrix_is_enabled()) {
        if (kb_cums.underground_rgb_sw == 1) {
            for (uint8_t i = led_min; i < led_max; ++i) {
                if ((g_led_config.flags[i] == 4)) {
                    rgb_matrix_set_color(i, 0, 0, 0);
                }
            }
        } else if (kb_cums.underground_rgb_sw == 2) {
            for (uint8_t i = led_min; i < led_max; ++i) {
                if ((g_led_config.flags[i] == 2)) {
                    rgb_matrix_set_color(i, 0, 0, 0);
                }
            }
        }
    } else {
        rgb_matrix_set_color_all(0,0,0);
    }

    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(61, rgblight_get_val(), rgblight_get_val(), rgblight_get_val());
    }

    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(36, rgblight_get_val(), rgblight_get_val(), rgblight_get_val());
    }

    if (host_keyboard_led_state().scroll_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(14, rgblight_get_val(), rgblight_get_val(), rgblight_get_val());
    }

}


void eeconfig_init_kb(void) {
    kb_cums.raw = 0;
    eeconfig_update_kb(kb_cums.raw);
}

void keyboard_post_init_kb(void) {
    kb_cums.underground_rgb_sw = eeconfig_read_kb();
}

#endif

// cal_rgb_all(6,21,false,[[1,20],[],[],[13,14,15,16,20],[11,13,14,16],[3,4,6,7,8,12,18,20]],true,false)
