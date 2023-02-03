RGB_MATRIX_EFFECT(CYCLE_IN_OUT)
RGB_MATRIX_EFFECT(SOLID_COLOR_WHITE)
RGB_MATRIX_EFFECT(SOLID_COLOR_RED)
RGB_MATRIX_EFFECT(BREATHING_RED)

#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV CYCLE_IN_OUT_math(HSV hsv, int16_t dx, int16_t dy, uint8_t dist, uint8_t time) {
    hsv.h = 3 * dist / 2 - time;
    return hsv;
}

bool CYCLE_IN_OUT(effect_params_t* params) {
    return effect_runner_dx_dy_dist(params, &CYCLE_IN_OUT_math);
}


bool SOLID_COLOR_RED(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 255, 0, 0);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

bool SOLID_COLOR_WHITE(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, 255, 255, 255);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

bool BREATHING_RED(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    HSV      hsv  = {0, 1, 1};
    uint16_t time = scale16by8(g_rgb_timer, rgb_matrix_config.speed / 8);
    hsv.v         = scale8(abs8(sin8(time) - 128) * 2, hsv.v);
    RGB rgb       = rgb_matrix_hsv_to_rgb(hsv);
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
    return rgb_matrix_check_finished_leds(led_max);
}


#endif
