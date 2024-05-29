RGB_MATRIX_EFFECT(ALL_WHITE)
RGB_MATRIX_EFFECT(WHITE_BREATHING)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool ALL_WHITE(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    uint8_t brightness = rgb_matrix_config.hsv.v;  // 获取当前配置的亮度

    // 设置 LED 为白色，同时考虑亮度
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, brightness, brightness, brightness);  // 设置为白色，RGB 分别是亮度值
    }

    return rgb_matrix_check_finished_leds(led_max);
}

bool WHITE_BREATHING(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    uint8_t brightness = rgb_matrix_config.hsv.v;  // 获取当前配置的亮度

    HSV hsv = {0, 0, brightness};  // 使用亮度值设置白色

    uint16_t time = scale16by8(g_rgb_timer, rgb_matrix_config.speed / 8);
    hsv.v = scale8(abs8(sin8(time) - 128) * 2, hsv.v);
    RGB rgb = rgb_matrix_hsv_to_rgb(hsv);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }

    return rgb_matrix_check_finished_leds(led_max);
}

#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
