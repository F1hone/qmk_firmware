# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes    # Mouse keys
EXTRAKEY_ENABLE = yes   # Audio control and System control
CONSOLE_ENABLE = yes    # Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
RGBLIGHT_ENABLE = no   # Enable keyboard underlight functionality
BACKLIGHT_ENABLE = no  # Enable keyboard backlight functionality
HAPTIC_ENABLE = yes
HAPTIC_DRIVER += SOLENOID

LAYOUTS = 60_ansi 60_iso 60_ansi_split_bs_rshift 60_hhkb
