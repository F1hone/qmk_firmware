#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
const is31fl3733_led_t PROGMEM g_is31fl3733_leds[IS31FL3733_LED_COUNT] = {
    { 0, SW11_CS14, SW10_CS14, SW12_CS14 },
    { 0, SW11_CS13, SW10_CS13, SW12_CS13 },
    { 0, SW11_CS12, SW10_CS12, SW12_CS12 },
    { 0, SW11_CS11, SW10_CS11, SW12_CS11 },
    { 0, SW11_CS10, SW10_CS10, SW12_CS10 },
    { 0, SW11_CS9,  SW10_CS9,  SW12_CS9 },
    { 0, SW11_CS8,  SW10_CS8,  SW12_CS8 },
    { 0, SW11_CS7,  SW10_CS7,  SW12_CS7 },
    { 0, SW11_CS6,  SW10_CS6,  SW12_CS6 },
    { 0, SW11_CS5,  SW10_CS5,  SW12_CS5 },
    { 0, SW11_CS4,  SW10_CS4,  SW12_CS4 },
    { 0, SW11_CS3,  SW10_CS3,  SW12_CS3 },
    { 0, SW11_CS2,  SW10_CS2,  SW12_CS2 },
    { 0, SW11_CS1,  SW10_CS1,  SW12_CS1 },

    { 0, SW8_CS14, SW7_CS14, SW9_CS14 },
    { 0, SW8_CS13, SW7_CS13, SW9_CS13 },
    { 0, SW8_CS12, SW7_CS12, SW9_CS12 },
    { 0, SW8_CS11, SW7_CS11, SW9_CS11 },
    { 0, SW8_CS10, SW7_CS10, SW9_CS10 },
    { 0, SW8_CS9,  SW7_CS9,  SW9_CS9 },
    { 0, SW8_CS8,  SW7_CS8,  SW9_CS8 },
    { 0, SW8_CS7,  SW7_CS7,  SW9_CS7 },
    { 0, SW8_CS6,  SW7_CS6,  SW9_CS6 },
    { 0, SW8_CS5,  SW7_CS5,  SW9_CS5 },
    { 0, SW8_CS4,  SW7_CS4,  SW9_CS4 },
    { 0, SW8_CS3,  SW7_CS3,  SW9_CS3 },
    { 0, SW8_CS2,  SW7_CS2,  SW9_CS2 },
    { 0, SW8_CS1,  SW7_CS1,  SW9_CS1 },

    { 0, SW5_CS14, SW4_CS14, SW6_CS14 },
    { 0, SW5_CS12, SW4_CS12, SW6_CS12 },
    { 0, SW5_CS11, SW4_CS11, SW6_CS11 },
    { 0, SW5_CS10, SW4_CS10, SW6_CS10 },
    { 0, SW5_CS9,  SW4_CS9,  SW6_CS9 },
    { 0, SW5_CS8,  SW4_CS8,  SW6_CS8 },
    { 0, SW5_CS7,  SW4_CS7,  SW6_CS7 },
    { 0, SW5_CS6,  SW4_CS6,  SW6_CS6 },
    { 0, SW5_CS5,  SW4_CS5,  SW6_CS5 },
    { 0, SW5_CS4,  SW4_CS4,  SW6_CS4 },
    { 0, SW5_CS3,  SW4_CS3,  SW6_CS3 },
    { 0, SW5_CS2,  SW4_CS2,  SW6_CS2 },
    { 0, SW5_CS1,  SW4_CS1,  SW6_CS1 },

    { 0, SW2_CS14, SW1_CS14, SW3_CS14 },
    { 0, SW2_CS13, SW1_CS13, SW3_CS13 },
    { 0, SW2_CS11, SW1_CS11, SW3_CS11 },
    { 0, SW2_CS10, SW1_CS10, SW3_CS10 },
    { 0, SW2_CS9,  SW1_CS9,  SW3_CS9 },
    { 0, SW2_CS8,  SW1_CS8,  SW3_CS8 },
    { 0, SW2_CS7,  SW1_CS7,  SW3_CS7 },
    { 0, SW2_CS6,  SW1_CS6,  SW3_CS6 },
    { 0, SW2_CS5,  SW1_CS5,  SW3_CS5 },
    { 0, SW2_CS4,  SW1_CS4,  SW3_CS4 },
    { 0, SW2_CS3,  SW1_CS3,  SW3_CS3 },
    { 0, SW2_CS2,  SW1_CS2,  SW3_CS2 },
    { 0, SW2_CS1,  SW1_CS1,  SW3_CS1 },

    { 0, SW2_CS15, SW1_CS15, SW3_CS15 },
    { 0, SW5_CS13, SW4_CS13, SW6_CS13 },
    { 0, SW2_CS12, SW1_CS12, SW3_CS12 },
    { 0, SW5_CS15, SW4_CS15, SW6_CS15 },
    { 0, SW8_CS15, SW7_CS15, SW9_CS15 },
    { 0, SW2_CS16, SW1_CS16, SW3_CS16 },
    { 0, SW5_CS16, SW4_CS16, SW6_CS16 },
    { 0, SW8_CS16, SW7_CS16, SW9_CS16 },
    { 0, SW11_CS16, SW10_CS16, SW12_CS16 }
};

led_config_t g_led_config = {
    {
        { 13, 12, 11,     10,      9,  8,      7,      6,  5,  4,  3,  2,      1,  0 },
        { 27, 26, 25,     24,     23, 22,     21,     20, 19, 18, 17, 16,     15, 14 },
        { 40, 39, 38,     37,     36, 35,     34,     33, 32, 31, 30, 29, NO_LED, 28 },
        { 53, 52, 51,     50,     49, 48,     47,     46, 45, 44, 43, 42, NO_LED, 41 },
        { 62, 61, 60, NO_LED, NO_LED, 59, NO_LED, NO_LED, 58, 57, 56, 55, NO_LED, 54 }
    }, {
        { 216,   0 }, { 192,   0 }, { 176,   0 }, { 160,   0 }, { 144,   0 }, { 128,   0 }, { 112,   0 }, {  96,   0 }, {  80,   0 }, {  64,   0 }, {  48,   0 }, {  32,   0 }, {  16,   0 }, {   0,   0 },
        { 220,  16 }, { 200,  16 }, { 184,  16 }, { 168,  16 }, { 152,  16 }, { 136,  16 }, { 120,  16 }, { 104,  16 }, {  88,  16 }, {  72,  16 }, {  56,  16 }, {  40,  16 }, {  24,  16 }, {   4,  16 },
        { 214,  32 }, { 188,  32 }, { 172,  32 }, { 156,  32 }, { 140,  32 }, { 124,  32 }, { 108,  32 }, {  92,  32 }, {  76,  32 }, {  60,  32 }, {  44,  32 }, {  28,  32 },               {   6,  32 },
        { 224,  48 },               { 208,  48 }, { 186,  48 }, { 164,  48 }, { 148,  48 }, { 132,  48 }, { 116,  48 }, { 100,  48 }, {  84,  48 }, {  68,  48 }, {  52,  48 }, {  36,  48 }, {   9,  48 },
        { 224,  64 }, { 208,  64 }, { 192,  64 },                                           { 176,  64 },                             { 160,  64 }, { 102,  64 }, {  42,  64 }, {  22,  64 }, {   2,  64 }
    }, {
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        1,    1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 1, 1,          1,       1, 4, 1, 1, 1
    }
};

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
