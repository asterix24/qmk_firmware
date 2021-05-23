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
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0xCAFE
#define DEVICE_VER 0x0003
#define MANUFACTURER IsoKey <asterix24@gmail.com>
#define PRODUCT isokey
#define DESCRIPTION Fully Orthometric keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 23

#define MATRIX_ROW_PINS \
    { A0, A1, A2, A3, A4, A5 }
#define MATRIX_COL_PINS \
/*   0    , 1   , 2   , 3  , 4  , 5  , 6  , 7  , 8   , 9  , 10 , 11  , 12 , 13  , 14 , 15 , 16 , 17 , 18  , 19  , 20  , 21  , 22    */ \
    { C13 , C14 , C15 , B9 , B8 , B5 , B4 , A6 , A15 , A7 , B3 , B12 , B0 , A10 , B1 , A8 , A8 , A8 , B10 , B15 , B14 , B13 , B12 }
//{ A8 , A8  , A8  , A8 , A8 , A8 , A8 , A8 , A8  , A8 , A8  , A8  , A8 , A8  , A8 , A8 , A8 , A8 , B10 , B15 , B14 , B13 , B12 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define I2C_DRIVER I2CD1
#define I2C1_SCL_BANK GPIOB
#define I2C1_SCL 6
#define I2C1_SCL_PAL_MODE 4
#define I2C1_SDA_BANK GPIOB
#define I2C1_SDA 7
#define I2C1_SDA_PAL_MODE 4


#define EEPROM_I2C_24LC128


