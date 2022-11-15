# MCU name
MCU = STM32F401
BOARD = BLACKPILL_STM32_F401

# Bootloader selection
# BOOTLOADER = tinyuf2
BOOTLOADER = stm32-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration

# Do not enable SLEEP_LEDENALE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
RGBLIGHT_DRIVER = WS2812
RGB_MATRIX_ENABLE = no
# RGB_MATRIX_DRIVER = WS2812
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
WS2812_DRIVER = pwm
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes

# EEPROM_DRIVER = i2c
