/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * Copyright 2020 Daniele Basile <asteri24@gmail.com>
 *
 */
#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xCAFE
#define DEVICE_VER      0x0003
#define MANUFACTURER    IsoKey <asterix24@gmail.com>
#define PRODUCT         isokey
#define DESCRIPTION     Fully Orthometric keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 23

#define MATRIX_ROW_PINS { C0, C1, C2, C3, C12, C5 }
#define MATRIX_COL_PINS { A0, A1, A4, A5, A6, A7, B0, B1, B3, B4, B5, B6, B7, B8, B9, B12, B13, B14, B15, C6, C7 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5
