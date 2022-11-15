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
#include "kelowna_re.h"

#ifdef RGB_MATRIX_ENABLE

/* globol var store in eeprom for key and underground rgb switch */
typedef union {
    uint32_t raw;
    uint8_t underground_rgb_sw :8;
} kb_cums_t;
kb_cums_t kb_cums;

led_config_t g_led_config = {
    {
        {0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,  11,  12,   NO_LED,  13},
        {27,   NO_LED,  26,  25,  24,  23,  22,  21,  20,  19,  18,  17,  16,  15,  14},
        {28,   NO_LED,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,   NO_LED,  40},
        {54,   NO_LED,  53,  52,  51,  50,  49,  48,  47,  46,  45,  44,  43,  42,  41},
        {55,  56,  57,   NO_LED,   NO_LED,   NO_LED,  58,   NO_LED,   NO_LED,   NO_LED,  59,  60,  61,  62,  63},
    },
    {
        {0,0},   {16,0},  {32,0},   {48,0},  {64,0},  {80,0},  {96,0},  {112,0}, {128,0}, {144,0}, {160,0}, {176,0}, {192,0},          {224,0},
        {224,16},         {208,16}, {192,16},{176,16},{160,16},{144,16},{128,16},{112,16},{96,16}, {80,16}, {64,16}, {48,16}, {32,16}, {0,16},
        {0,32},           {32,32},  {48,32}, {64,32}, {80,32}, {96,32}, {112,32},{128,32},{144,32},{160,32},{176,32},{192,32},         {224,32},
        {224,48},         {208,48}, {192,48},{176,48},{160,48},{144,48},{128,48},{112,48},{96,48}, {80,48}, {64,48}, {48,48}, {32,48}, {0,48},
        {0,64},  {16,64}, {32,64},                             {96,64},                            {160,64},{176,64},{192,64},{208,64},{224,64},
        {224,64},{187,64},{149,64},{112,64},{75,64},{37,64},{0,64},
        {0,32},
        {0,0},{37,0},{75,0},{112,0},{149,0},{187,0},{224,0},{224,32}
    },
    {
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4,
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
      2, 2, 2, 2, 2, 2
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
        RGB_MATRIX_INDICATOR_SET_COLOR(28, rgblight_get_val(), rgblight_get_val(), rgblight_get_val());
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

// cal_rgb_all(5,15,false,[[13],[1],[1,13],[1],[3,4,5,7,8,9]],false,false)

