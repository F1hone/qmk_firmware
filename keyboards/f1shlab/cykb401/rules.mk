MCU = STM32F401
BOARD = GENERIC_STM32_F401XC

BOOTLOADER = stm32-dfu

# Yes
EXTRAKEY_ENABLE = yes
NKRO_ENABLE = yes
BOOTMAGIC_ENABLE = yes

# No
LTO_ENABLE = no
RGBLIGHT_ENABLE = no
CONSOLE_ENABLE = no        # Console for debug(+400)
COMMAND_ENABLE = no        # Commands for debug and configuration
MOUSEKEY_ENABLE = no
SLEEP_LED_ENABLE = no
MIDI_ENABLE = no
UNICODE_ENABLE = no
BLUETOOTH_ENABLE = no
AUDIO_ENABLE = no
BACKLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no
OLED_ENABLE = no
ENCODER_ENABLE = no
