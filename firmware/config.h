/* Copyright 2021 Alex Neufeld
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
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5342 // "SB"
#define PRODUCT_ID      0x3225 // "2%"
#define DEVICE_VER      0x0001
#define MANUFACTURER    AlexNeufeld
#define PRODUCT         altoids12

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/*  pinout */
#define MATRIX_ROW_PINS { F4, F5, F6, F7 }
#define MATRIX_COL_PINS { D3, D2, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200
