#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDE29
#define PRODUCT_ID      0x7305
#define DEVICE_VER      0x0001
#define MANUFACTURER    Leo Deng
#define PRODUCT         Enjoy
#define DESCRIPTION     Pro Micro driven joystick & 4x4 pad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B1, B3, B2, B6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set to 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

#define PREVENT_STUCK_MODIFIERS
#define TAP_CODE_DELAY 100

/* key combination for command */
#define IS_COMMAND() ( keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) )

#define JOYSTICK_BUTTON_COUNT 1
#define JOYSTICK_AXES_COUNT 2

#endif