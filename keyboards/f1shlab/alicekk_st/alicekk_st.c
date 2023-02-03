/* Copyright 2022 TW59420 <https://github.com/TW59420>
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
#include "alicekk_st.h"


const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
//esc f1 f2
    {0, B_3,    A_3,    C_3},//0
    {0, B_4,    A_4,    C_4},//1
    {0, B_5,    A_5,    C_5},//2
    {0, B_6,    A_6,    C_6},//3
    {0, B_7,    A_7,    C_7},//4
    {0, B_8,    A_8,    C_8},//5
    {0, B_9,    A_9,    C_9},//6

    {1, B_1,    A_1,    C_1},//7
    {1, B_2,    A_2,    C_2},//8
    {1, B_3,    A_3,    C_3},//9
    {1, B_4,    A_4,    C_4},//10
    {1, B_5,    A_5,    C_5},//11
    {1, B_6,    A_6,    C_6},//12
    {1, B_7,    A_7,    C_7},//13
    {1, B_8,    A_8,    C_8},//轴灯scroll lock         14
    {1, B_9,    A_9,    C_9},//15

    {1, K_14,   J_14,   L_14},//独立指示灯num lock     16
    {1, K_15,   J_15,   L_15},//独立指示灯caps lock    17
    {1, K_16,   J_16,   L_16},//独立指示灯scroll lock  18

    //1 2 3 4 5
    {0, B_12,   A_12,   C_12},//19
    {0, B_13,   A_13,   C_13},//20
    {0, B_14,   A_14,   C_14},//21
    {0, B_15,   A_15,   C_15},//22
    {0, B_16,   A_16,   C_16},//23
    {0, E_1,    D_1,    F_1},//24
    {0, E_2,    D_2,    F_2},//25
    {0, E_3,    D_3,    F_3},//26
    {0, E_4,    D_4,    F_4},//27

    {1, B_10,   A_10,   C_10},//28
    {1, B_11,   A_11,   C_11},//29
    {1, B_12,   A_12,   C_12},//30
    {1, B_13,   A_13,   C_13},//31
    {1, B_14,   A_14,   C_14},//32
    {1, B_15,   A_15,   C_15},//33
    {1, B_16,   A_16,   C_16},//34
    {1, E_1,    D_1,    F_1},//35
    {1, E_2,    D_2,    F_2},//轴灯num lock             36
    {1, E_3,    D_3,    F_3},//37
    {1, E_4,    D_4,    F_4},//38
    {1, E_5,    D_5,    F_5},//39

    //q w e r t y
    {0, E_7,    D_7,    F_7},//40
    {0, E_8,    D_8,    F_8},//41
    {0, E_9,    D_9,    F_9},//42
    {0, E_10,   D_10,   F_10},//43
    {0, E_11,   D_11,   F_11},//44
    {0, E_12,   D_12,   F_12},//45
    {0, E_13,   D_13,   F_13},//46
    {0, E_14,   D_14,   F_14},//47
    {0, E_15,   D_15,   F_15},//48

    {1, E_6,    D_6,    F_6},//49
    {1, E_7,    D_7,    F_7},//50
    {1, E_8,    D_8,    F_8},//51
    {1, E_9,    D_9,    F_9},//52
    {1, E_10,   D_10,   F_10},//53
    {1, E_11,   D_11,   F_11},//54
    {1, E_12,   D_12,   F_12},//55
    {1, E_13,   D_13,   F_13},//56
    {1, E_14,   D_14,   F_14},//57
    {1, E_15,   D_15,   F_15},//58
    {1, E_16,   D_16,   F_16},//59
    {1, H_1,    G_1,    I_1},//数字区加号               60

    //a s d f g
    {0, H_2,    G_2,    I_2},//轴灯CAPSlock              61
    {0, H_3,    G_3,    I_3},//62
    {0, H_4,    G_4,    I_4},//63
    {0, H_5,    G_5,    I_5},//64
    {0, H_6,    G_6,    I_6},//65
    {0, H_7,    G_7,    I_7},//66
    {0, H_8,    G_8,    I_8},//67
    {0, H_9,    G_9,    I_9},//68
    {0, H_10,   G_10,   I_10},//69

    {1, H_2,    G_2,    I_2},//70
    {1, H_3,    G_3,    I_3},//71
    {1, H_4,    G_4,    I_4},//72
    {1, H_5,    G_5,    I_5},//73
    {1, H_6,    G_6,    I_6},//74
    {1, H_7,    G_7,    I_7},//75
    {1, H_8,    G_8,    I_8},//76


    //z x c v b
    {0, H_13,   G_13,   I_13},//77
    {0, H_14,   G_14,   I_14},//78
    {0, H_15,   G_15,   I_15},//79
    {0, H_16,   G_16,   I_16},//80
    {0, K_1,    J_1,    L_1},//81
    {0, K_2,    J_2,    L_2},//82
    {0, K_3,    J_3,    L_3},//83
    {0, K_4,    J_4,    L_4},//84
    {0, K_5,    J_5,    L_5},//85

    {1, H_9,    G_9,    I_9},//86
    {1, H_10,   G_10,   I_10},//87
    {1, H_11,   G_11,   I_11},//88
    {1, H_12,   G_12,   I_12},//89
    {1, H_13,   G_13,   I_13},//90
    {1, H_14,   G_14,   I_14},//91
    {1, H_15,   G_15,   I_15},//92
    {1, H_16,   G_16,   I_16},//数字区enter     93

    //ctrl win alt
    {0, K_8,    J_8,    L_8},//94
    {0, K_9,    J_9,    L_9},//95
    {0, K_10,   J_10,   L_10},//96
    {0, K_11,   J_11,   L_11},//97
    {0, K_12,   J_12,   L_12},//98

    {1, K_1,    J_1,    L_1},//99
    {1, K_2,    J_2,    L_2},//100
    {1, K_3,    J_3,    L_3},//101
    {1, K_4,    J_4,    L_4},//102
    {1, K_5,    J_5,    L_5},//103
    {1, K_6,    J_6,    L_6},//104
    {1, K_7,    J_7,    L_7},//105
    {1, K_8,    J_8,    L_8},//106


};

led_config_t g_led_config = {
    {
        { 0,    NO_LED, 1,       2,        3,       4,      5,       6,        7,       8      },\
        { 19,   20,     21,      22,       23,      24,     25,      26,       27,      28     },\
        { 40,   41,     42,      43,       44,      45,     46,      47,       48,      49     },\
        { 61,   62,     63,      64,       65,      66,     67,      68,       69,      70     },\
        { 77,   78,     79,      80,       81,      82,     83,      84,       85,      86     },\
        { 94,   95,     96,      NO_LED,   NO_LED,  97,     NO_LED,  NO_LED,   98,      99     },\
        { 39,   93,     NO_LED,  104,      103,     102,    101,     NO_LED,   100,     NO_LED },\
        { 60,   106,    105,     NO_LED,   89,      NO_LED,  88,     NO_LED,   NO_LED,  87     },\
        { 92,   91,     90,      16,       17,      18,     73,      NO_LED,   72,      71     },\
        { 76,   75,     74,      56,       55,      54,     53,      52,       51,      50     },\
        { 59,   58,     57,      35,       34,      33,     32,      31,       30,      29     },\
        { 38,   37,     36,      15,       14,      13,     12,      11,       10,      9      },\
    }, {
     //      0            1              2            3             4             5            6              7            8             9           10            11            12            13            14            15           16             17            18
    {   0,   0 }, {  20,   0 }, {  31,   0 }, {  41,   0 }, {  51,   0 }, {  66,   0 }, {  76,   0 }, { 87,   0 }, { 97,   0 }, { 112,  0 }, { 122,   0 }, { 132,   0 }, { 143,   0 }, { 158,   0 }, { 168,   0 }, { 178,   0 }, { 196,   0 }, { 208,   0 }, { 221,   0 },
    //   19            20            21             22           23            24             25           26           27          28            29            30            31             32            33           34             35            36           37             38            39
    {   0,  21 }, {  10,  21 }, {  20,  21 }, {  31,  21 }, {  41,  21 }, {  51,  21 }, {  61,  21 }, { 71,  21 }, { 81,  21 }, { 92,  21 }, { 102,  21 }, { 112,  21 }, { 122,  21 }, { 137,  21 }, { 158,  21 }, { 168,  21 }, { 178,  21 }, { 193,  21 }, { 204,  21 }, { 214,  21 }, { 224,  21 },
//       40             41           42             43           44            45             46          47            48           49           50            51            52             53            54           55             56            57           58             59            60
    {   8,  32 }, {  15,  32 }, {  25,  32 }, {  36,  32 }, {  45,  32 }, {  56,  32 }, {  66,  32 }, { 76,  32 }, { 87,  32 }, { 97,  32 }, { 107,  32 }, { 117,  32 }, { 127,  32 }, { 135,  32 }, { 158,  32 }, { 168,  32 }, { 178,  32 }, { 193,  32 }, { 204,  32 }, { 214,  32 }, { 224,  37 },
//       61             62           63             64           65            66             67           68           69           70           71            72             73            74            75            76
    {   9,  43 }, {  18,  43 }, {  28,  43 }, {  38,  43 }, {  48,  43 }, {  59,  43 }, {  69,  43 }, { 79,  43 }, { 89,  43 }, { 99,  43 }, { 109,  43 }, { 120,  43 }, { 131,  43 }, { 193,  43 }, { 204,  43 }, { 214,  43 },
//        77,           78,           79,           80,          81,           82,            83,         84,           85,         86,           87,           88,          89,            90,           91,            92,          93
    {  11,  53 }, {  23,  53 }, {  33,  53 }, {  43,  53 }, {  53,  53 }, {  63,  53 }, {  74,  53 }, { 84,  53 }, { 94,  53 }, { 104, 53 }, { 115,  53 }, { 129,  53 }, { 168,  53 }, { 193,  53 }, { 204,  53 }, { 214,  53 }, { 224,  59 },
//        94,           95,          96,            97,          98,           99,            100,        101,         102,         103,          104,         105,         106,
    {   6,  64 }, {  19,  64 }, {  32,  64 }, {  66,  64 }, { 108,  64 }, { 121,  64 }, { 134,  64 }, { 146, 64 }, { 158, 64 }, { 168, 64 }, { 178,  64 }, { 199,  64 }, { 214,  64 },


}, {
  //1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22
    4,   1, 1, 1, 1,   4, 4, 4, 4,   1, 1, 1, 1,   4, 8, 4,   8, 8, 8,

    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,   4, 4, 4,   8, 4, 4, 4,
    4,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4,   4,   4, 4, 4,   1, 1, 1, 4,
    8,   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4,     4,              1, 1, 1,
    4,    1, 1, 1, 1, 1, 1, 1, 1, 1, 4,       4,      1,      1, 1, 1, 4,
    4, 4, 4,          4,             4, 4, 4, 4,   1, 1, 1,   4, 4,

} };

#if defined(RGB_MATRIX_ENABLE) && (defined(CAPS_LOCK_LED_INDEX) || defined(NUM_LOCK_LED_INDEX) || defined(SCRL_LOCK_LED_INDEX))

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
    if (!rgb_matrix_indicators_advanced_user(led_min, led_max)) {
        return false;
    }
    // RGB_MATRIX_INDICATOR_SET_COLOR(index, red, green, blue);
#    if defined(CAPS_LOCK_LED_INDEX)
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX, 255, 255, 255);
        RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX1, 255, 255, 255);
    } else {
        if (!rgb_matrix_get_flags()) {
            RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX, 0, 0, 0);
            RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED_INDEX1, 0, 0, 0);
        }
    }
#    endif // CAPS_LOCK_LED_INDEX
#    if defined(NUM_LOCK_LED_INDEX)
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(NUM_LOCK_LED_INDEX, 255, 255, 255);
        RGB_MATRIX_INDICATOR_SET_COLOR(NUM_LOCK_LED_INDEX1, 255, 255, 255);
    } else {
        if (!rgb_matrix_get_flags()) {
            RGB_MATRIX_INDICATOR_SET_COLOR(NUM_LOCK_LED_INDEX, 0, 0, 0);
            RGB_MATRIX_INDICATOR_SET_COLOR(NUM_LOCK_LED_INDEX1, 0, 0, 0);
        }
    }
#    endif // NUM_LOCK_LED_INDEX
#    if defined(SCRL_LOCK_LED_INDEX)
    if (host_keyboard_led_state().scroll_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(SCRL_LOCK_LED_INDEX, 255, 255, 255);
        RGB_MATRIX_INDICATOR_SET_COLOR(SCRL_LOCK_LED_INDEX1, 255, 255, 255);
    } else {
        if (!rgb_matrix_get_flags()) {
            RGB_MATRIX_INDICATOR_SET_COLOR(SCRL_LOCK_LED_INDEX, 0, 0, 0);
            RGB_MATRIX_INDICATOR_SET_COLOR(SCRL_LOCK_LED_INDEX1, 0, 0, 0);
        }
    }
#    endif // SCRL_LOCK_LED_INDEX
    return true;
}

#endif // RGB_MATRIX_ENABLE...
