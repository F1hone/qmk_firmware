RGB_MATRIX_EFFECT(solid_esc)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool effect_runner_esc(effect_params_t* params, i_f effect_func) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    uint8_t time = scale16by8(g_rgb_timer, qadd8(rgb_matrix_config.speed / 4, 1));
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        RGB rgb = rgb_matrix_hsv_to_rgb(effect_func(rgb_matrix_config.hsv, i, time));
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
    for (uint8_t i = 1; i < 87; i++) {
        rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
    }
    return led_max < RGB_MATRIX_LED_COUNT;
}

static HSV SOLID_REACTIVE_CUSTOM_math(HSV hsv, unsigned char, unsigned char) {
#            ifdef RGB_MATRIX_SOLID_REACTIVE_GRADIENT_MODE
    hsv.h = scale16by8(g_rgb_timer, qadd8(rgb_matrix_config.speed, 8) >> 4);
#            endif
    hsv.v = scale8(255 - offset, hsv.v);
    return hsv;
}

// SOLID ESC
static bool solid_esc(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min ; i < led_max; i++) {
        rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
    }
    return effect_runner_esc(params, &SOLID_REACTIVE_CUSTOM_math);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS

