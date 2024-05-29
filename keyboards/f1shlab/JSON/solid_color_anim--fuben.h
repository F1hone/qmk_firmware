RGB_MATRIX_EFFECT(SOLID_COLOR)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool SOLID_COLOR(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    uint8_t brightness = rgb_matrix_config.hsv.v;  // 获取当前配置的亮度

    // 设置 LED 为白色，同时考虑亮度
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, brightness, brightness, brightness);  // 设置为白色，RGB 分别是亮度值
    }

    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
