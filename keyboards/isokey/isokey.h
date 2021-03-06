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

#include "quantum.h"

#define LAYOUT_all( \
K0000 , K10 , K02 , K03   , K04 , K05 , K06   , K07 , K08 , K09   , K010 , K011 , K012  ,         K014  , K015 , K016  , K21_1 , K22_1,  K21_2 , K22_2 , \
K0010 , K11 , K12 , K13   , K14 , K15 , K16   , K17 , K18 , K19   , K110 , K111 , K112  , K113  , K114  , K115 , K116  , K117  , K118  , K119  , K120  , \
K0020 , K21 , K22 , K23   , K24 , K25 , K26   , K27 , K28 , K29   , K210 , K211 , K212  , K213  , K214  , K215 , K216  , K217  , K218  , K219  , K220  , \
K0030 , K31 , K32 , K33   , K34 , K35 , K36   , K37 , K38 , K39   , K310 , K311 , K312  ,         K314  , K315 , K316  , K317  , K318  , K319  , K22_3 , \
K0040 , K41 , K42 , K43   , K44 , K45 , K46   , K47 , K48 , K49   , K410 , K411 ,         K413  , K21_4 , K415 , K22_4,  K417  , K418  , K419  , K420  , \
K0050 , K51 , K52 ,         K54 , K55 ,         K57 , K58 ,         K510 , K511 , K512  , K513  , K514  , K515 , K516  , K517  , K21_3 , K519  , K21_5   \
    ) \
{ \
/*   0   , 1   , 2   , 3     , 4   , 5   , 6     , 7   , 8   , 9     , 10   , 11   , 12    , 13    , 14    , 15   , 16    , 17    , 18    , 19    , 20    */ \
{  K0000 , K10 , K02 , K03   , K04 , K05 , K06   , K07 , K08 , K09   , K010 , K011 , K012  , KC_NO , K014  , K015 , K016  , K21_1 , K22_1 , K21_2 , K22_2} , \
{  K0010 , K11 , K12 , K13   , K14 , K15 , K16   , K17 , K18 , K19   , K110 , K111 , K112  , K113  , K114  , K115 , K116  , K117  , K118  , K119  , K120 } , \
{  K0020 , K21 , K22 , K23   , K24 , K25 , K26   , K27 , K28 , K29   , K210 , K211 , K212  , K213  , K214  , K215 , K216  , K217  , K218  , K219  , K220 } , \
{  K0030 , K31 , K32 , K33   , K34 , K35 , K36   , K37 , K38 , K39   , K310 , K311 , K312  , KC_NO , K314  , K315 , K316  , K317  , K318  , K319  , K22_3} , \
{  K0040 , K41 , K42 , K43   , K44 , K45 , K46   , K47 , K48 , K49   , K410 , K411 , KC_NO , K413  , K21_4 , K415 , K22_4 , K417  , K418  , K419  , K420 } , \
{  K0050 , K51 , K52 , KC_NO , K54 , K55 , KC_NO , K57 , K58 , KC_NO , K510 , K511 , K512  , K513  , K514  , K515 , K516  , K517  , K21_3 , K519  , K21_5} \
}

