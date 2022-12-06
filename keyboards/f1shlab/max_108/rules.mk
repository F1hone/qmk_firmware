# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = yes	# Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
SLEEP_LED_ENABLE = no

ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes

RGB_MATRIX_ENABLE = yes     # Enable keyboard RGB Matrix
RGB_MATRIX_DRIVER = WS2812  # RGB matrix driver support
