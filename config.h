/* Copyright 2021 @ Keychron(https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { B5, B4, B3, A15, A14, A13 }
#define MATRIX_COL_PINS \
    { C14, C15, A0, A1, A2, A3, A4, A5, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* RGB Matrix Driver Configuration */
#define SNLED27351_I2C_ADDRESS_1 SNLED27351_I2C_ADDRESS_VDDIO
#define SNLED27351_I2C_ADDRESS_2 SNLED27351_I2C_ADDRESS_GND

/* Increase I2C speed to 1000 KHz */
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 3U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 15U
#define I2C1_TIMINGR_SCLL 51U

#define SNLED27351_PHASE_CHANNEL SNLED27351_SCAN_PHASE_9_CHANNEL

/* Custom config */
/* turn off effects when suspended */
// #define RGB_DISABLE_WHEN_USB_SUSPENDED

/* EEPROM Driver Configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)

// #define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
// #define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// #define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
// #define ENABLE_RGB_MATRIX_BAND_SAT
// #define ENABLE_RGB_MATRIX_BAND_VAL
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
//#define ENABLE_RGB_MATRIX_CYCLE_ALL
//#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
//#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
/* #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN */
/* #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL */
/* #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL */
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
/* #define ENABLE_RGB_MATRIX_DUAL_BEACON */
/* #define ENABLE_RGB_MATRIX_RAINBOW_BEACON */
// #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
// #define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// #define ENABLE_RGB_MATRIX_HUE_BREATHING
// #define ENABLE_RGB_MATRIX_HUE_PENDULUM
// #define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
// #define ENABLE_RGB_MATRIX_PIXEL_FLOW
// #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
/* #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE */
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
/* #define ENABLE_RGB_MATRIX_SPLASH */
/* #define ENABLE_RGB_MATRIX_MULTISPLASH */
/* #define ENABLE_RGB_MATRIX_SOLID_SPLASH */
/* #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH */

/* Config */
/* #define RGB_MATRIX_KEYPRESSES */
#define RGB_MATRIX_KEYRELEASES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_DEFAULT_SPD 10
#define RGB_MATRIX_DEFAULT_HUE 182
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE

//Layout
#define RGB_LAYOUT_6 RGB_PINK
#define RGB_LAYOUT_5 RGB_MAGENTA
#define RGB_LAYOUT_4 RGB_GREEN
#define RGB_LAYOUT_3 RGB_CYAN
#define RGB_LAYOUT_2 RGB_ORANGE
#define RGB_LAYOUT_1 RGB_RED
#define RGB_LAYOUT_0 RGB_PURPLE


#define HSV_LAYOUT_6 HSV_PINK
#define HSV_LAYOUT_5 HSV_MAGENTA
#define HSV_LAYOUT_4 HSV_GREEN
#define HSV_LAYOUT_3 HSV_CYAN
#define HSV_LAYOUT_2 HSV_ORANGE
#define HSV_LAYOUT_1 HSV_RED
#define HSV_LAYOUT_0 HSV_PURPLE

// KEYS
#define RGB_ROW_PINKY RGB_AZURE
#define RGB_ROW_RING RGB_PINK
#define RGB_ROW_MIDDLE RGB_CHARTREUSE
#define RGB_ROW_INDEX RGB_TURQUOISE
#define RGB_ROW_THUMB RGB_CORAL

// Index
#define IK_Q 31
#define IK_W 32
#define IK_E 33
#define IK_R 34
#define IK_T 35
#define IK_Y 36
#define IK_U 37
#define IK_I 38
#define IK_O 39
#define IK_P 40

#define IK_A 46
#define IK_S 47
#define IK_D 48
#define IK_F 49
#define IK_G 50
#define IK_H 51
#define IK_J 52
#define IK_K 53
#define IK_L 54
#define IK_SCL 55
#define IK_QUOTE 56

#define IK_Z 60
#define IK_X 61
#define IK_C 62
#define IK_V 63
#define IK_B 64
#define IK_N 65
#define IK_M 66

#define IK_PGUP 44
#define IK_PGDOWN 58
#define IK_INSERT 14

/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 45
#define HOME_KEY_LED_INDEX 29
