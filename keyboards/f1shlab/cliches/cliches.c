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
#include "cliches.h"

#ifdef RGB_MATRIX_ENABLE

/* globol var store in eeprom for key and underground rgb switch */
typedef union {
    uint32_t raw;
    uint8_t underground_rgb_sw :8;
} kb_cums_t;
kb_cums_t kb_cums;


led_config_t g_led_config = {
    {
        {0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10,  11,  12,  13},
        {14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27},
        {28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,   NO_LED},
        {41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,   NO_LED},
        {54,  55,  56,   NO_LED,  57,   NO_LED,   NO_LED,  58,   NO_LED,   NO_LED,  59,  60,  61,   NO_LED},
    },
    {
        {0,0},{17,0},{34,0},{52,0},{69,0},{86,0},{103,0},{121,0},{138,0},{155,0},{172,0},{190,0},{207,0},{224,0},
        {0,16},{17,16},{34,16},{52,16},{69,16},{86,16},{103,16},{121,16},{138,16},{155,16},{172,16},{190,16},{207,16},{224,16},
        {0,32},{17,32},{34,32},{52,32},{69,32},{86,32},{103,32},{121,32},{138,32},{155,32},{172,32},{190,32},{207,32},
        {0,48},{17,48},{34,48},{52,48},{69,48},{86,48},{103,48},{121,48},{138,48},{155,48},{172,48},{190,48},{207,48},
        {0,64},{17,64},{34,64},       {69,64},              {121,64},              {172,64},{190,64},{207,64},
        {224,64},{149,64},{75,64},{0,64},
        {0,0},{75,0},{149,0},{224,0}
    },
    {
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4,
      2, 2, 2, 2, 2, 2, 2, 2
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

#endif
// cal_rgb_all = function (row_num, col_num, reverse, skip_pair, is_z, last_start)
// cal_rgb_all(5,14,false,[[],[],[13],[13],[3,5,6,8,9,13]],true,false)
// cal_rgb_all(2,4,false,[[],[],[],[]],false,true)
