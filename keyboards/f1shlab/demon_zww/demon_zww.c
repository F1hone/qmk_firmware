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
#include "demon_zww.h"

led_config_t g_led_config = {
    {
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
		{15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29},
		{30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, NO_LED, 43},
		{44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, NO_LED, 56, 57},
		{58, 59, 60, NO_LED, NO_LED, 61, NO_LED, NO_LED, 62, 63, 64, 65, NO_LED, 66, 67}
    },
    {
		{7, 3},   {21, 3},  {35, 3},  {49, 3},  {63, 3},  {77, 3},  {91, 3},   {105, 3},  {119, 3},  {133, 3},  {147, 3},  {161, 3},  {175, 3},  {196, 3},  {217, 3},
		{10, 16}, {28, 16}, {42, 16}, {56, 16}, {70, 16}, {84, 16}, {98, 16},  {112, 16}, {126, 16}, {140, 16}, {154, 16}, {168, 16}, {182, 16}, {200, 16}, {217, 16},
		{12, 29}, {32, 29}, {46, 29}, {60, 29}, {74, 29}, {88, 29}, {102, 29}, {116, 29}, {130, 29}, {144, 29}, {158, 29}, {172, 29}, {194, 29},            {217, 29},
		{16, 41}, {38, 41}, {52, 41}, {66, 41}, {80, 41}, {94, 41}, {108, 41}, {122, 41}, {136, 41}, {150, 41}, {164, 41}, {184, 41},            {203, 41}, {217, 41},
		{9, 54},  {26, 54}, {44, 54},                     {96, 54},                       {147, 54}, {161, 54}, {175, 54}, {189, 54},            {203, 54}, {217, 54},

        {210,53}, {140,53}, {84,53}, {35,53},

        {28,0},   {84,0},   {140,0}, {210,0}
    },
    {
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
		1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1,
		8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1,
		1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1, 1,
		1, 1, 1,       1,       1, 1, 1, 1,    1, 1,
        2, 2, 2, 2, 2, 2, 2, 2
    }
};

#if defined(RGB_MATRIX_ENABLE) && defined(CAPS_LOCK_LED_INDEX)

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_user(keycode, record)) {
        return false;
    }
    switch (keycode) {
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
    }
    return true;
}

bool rgb_matrix_indicators_advanced_kb(uint8_t led_min, uint8_t led_max) {
    if (!rgb_matrix_indicators_advanced_user(led_min, led_max)) { return false; }
    // RGB_MATRIX_INDICATOR_SET_COLOR(index, red, green, blue);

    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX, 255, 0, 166);
    } else {
        if (!rgb_matrix_get_flags()) {
           RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX, 0, 0, 0);
        }
    }
    return true;
}

#endif // CAPS_LOCK_LED_INDEX
