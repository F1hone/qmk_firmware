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
#include "rgb64.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, NO_LED, 13},
		{27, NO_LED, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14},
		{28, NO_LED, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, NO_LED, 40},
		{54, NO_LED, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41},
		{55, 56, 57, NO_LED, NO_LED, NO_LED, 58, NO_LED, NO_LED, NO_LED, 59, 60, 61, 62, 63}
}, {
    // Key matrix (0 -> 63)
		{7, 10}, {22, 10}, {37, 10}, {52, 10}, {67, 10}, {82, 10}, {97, 10}, {112, 10}, {127, 10}, {142, 10}, {157, 10}, {172, 10}, {187, 10}, {209, 10},
		{213, 23}, {194, 23}, {179, 23}, {164, 23}, {149, 23}, {134, 23}, {119, 23}, {105, 23}, {90, 23}, {75, 23}, {60, 23}, {45, 23}, {30, 23}, {11, 23},
		{13, 35}, {34, 35}, {49, 35}, {63, 35}, {78, 35}, {93, 35}, {108, 35}, {123, 35}, {138, 35}, {153, 35}, {168, 35}, {183, 35}, {207, 35},
		{217, 48}, {202, 48}, {187, 48}, {172, 48}, {157, 48}, {142, 48}, {127, 48}, {112, 48}, {97, 48}, {82, 48}, {67, 48}, {52, 48}, {37, 48}, {15, 48},
        {9, 61}, {28, 61}, {47, 61}, {103, 61}, {157, 61}, {172, 61}, {187, 61}, {202, 61}, {217, 61},

    // Underglow (64 -> 79)
    {224, 64}, {187, 64}, {149, 64}, {112, 64}, {75, 64}, {37, 64}, {0, 64}, {0, 32},
    {0, 0}, {37, 0}, {75, 0}, {112, 0}, {149, 0}, {187, 0}, {224, 0}, {224, 32}
}, {
    // Key matrix (0 -> 63)
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,
		1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1,
		8,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1,
		1,    4, 4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 4, 1,
		1, 1, 1,          1,          1, 1, 4, 4, 4,

    // Underglow (64 -> 79)
    2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2
} };
#endif

#if defined(RGB_MATRIX_ENABLE) && defined(CAPS_LOCK_LED_INDEX)

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_user(keycode, record)) { return false; }
    switch (keycode) {
#ifdef RGB_MATRIX_ENABLE
        case RGB_TOG:
            if (record->event.pressed) {
                switch (rgb_matrix_get_flags()) {
                    case LED_FLAG_ALL: {
                        rgb_matrix_set_flags(LED_FLAG_NONE);
                        rgb_matrix_set_color_all(0, 0, 0);
                    } break;
                    default: {
                        rgb_matrix_set_flags(LED_FLAG_ALL);
                    } break;
                }
            }
            if (!rgb_matrix_is_enabled()) {
                rgb_matrix_set_flags(LED_FLAG_ALL);
                rgb_matrix_enable();
            }
            return false;
#endif
    }
    return true;
}

bool rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    if (!rgb_matrix_indicators_advanced_user(led_min, led_max)) { return false; }
    // RGB_MATRIX_INDICATOR_SET_COLOR(index, red, green, blue);

    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX, 255, 0, 0);
    } else {
        if (!rgb_matrix_get_flags()) {
           RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX, 0, 0, 0);
        }
    }
    return true;
}

#endif // CAPS_LOCK_LED_INDEX

// cal_rgb_all(5,15,false,[[13],[1],[1,13],[1],[3,4,5,7,8,9]],false,false)
