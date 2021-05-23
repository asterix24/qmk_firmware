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

#include QMK_KEYBOARD_H

// Define layer names
#define _NORMAL  0
#define _ALT1    1

enum isokey_keycodes {
  QMKBEST = SAFE_RANGE,
  M1_SW,  // Special function
  M2_SW,  // Special function
  M3_SW,  // Special function
  M4_SW,  // Special function
  M5_SW,  // Special function
  M6_SW,  // Special function
  M7_SW,  // Special function
  M8_SW,  // Special function
  M9_SW,  // Special function
  M10_SW, // Special function
  M11_SW, // Special function
  FN_SW,  // Special function
  EDA_MS, // Move selection
  EDA_AG, // Arrange group
  EDA_ZO, // Zoom out
  EDA_PM, // Poly Manager
  EDA_SO, // Selction out
  EDA_SL, // Selection line
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*  105  LAYOUT
|    | C13 | C14 | C15   | B9  | B8  | B5    | B4  | A6  | A15   | A7  | A1    | A1  | B0   | A10  | B1    | A9        | B2       | A8          | B10         | B15      | B14 | B13    | B12   |
|    | 0   | 1   | 2     | 3   | 4   | 5     | 6   | 7   | 8     | 9   | 10    | 11  | 12   | 13   | 14    | 15        | 16       | 17          | 18          | 19       | 20  | 21     | 22    |
| A0 | M1  | M2  | Esc   |     | F1  | F2    | F3  | F4  | F5    | F6  | F7    | F8  | F9   | F10  | F11   | F12       | PrtSc    | Scroll Lock | Pause Break |          |     |        |       |
| A1 | M3  | M4  | ~ `   | ! 1 | @ 2 | # 3   | $ 4 | % 5 | ^ 6   | & 7 | * 8   | ( 9 | ) 0  | _ -  | + =   | Backspace | Insert   | Home        | PgUp        | Num Lock | /   | *      | -     |
| A2 | M5  | M6  | Tab   | Q   | W   | E     | R   | T   | Y     | U   | I     | O   | P    | { [  | } ]   | Enter     | Delete   | End         | PgDn        | 7 Home   | 8 ↑ | 9 PgUp | +     |
| A3 | M7  | M8  | Ctrl  | A   | S   | D     | F   | G   | H     | J   | K     | L   | : ;  | \ '  | \     |           | X1 Extra | X2 Extra    | X3 Extra    | 4 ←      | 5   | 6 →    |       |
| A4 | M9  | M10 | Shift | Z   | X   | C     | V   | B   | N     | M   | < ,   | > . | ? /  |      | Shift |           |          |             | ↑           | 1 End    | 2 ↓ | 3 PgDn | Enter |
| A5 | M11 |     | Ctrl  | Win | Alt | space |     | Fn  | space |     | AltGr | Win | Menu | Ctrl | Fn    |           | ←        | ↓           | →           | 0 Ins    |     | . Del  |       |

                  K0000     , K10     , K02    , K03   , K04    , K05     , K06     , K07    , K08     , K09       , K010    , K011    , K012     ,           K014   , K015    , K016    ,                                 \
K21_1   , K22_1 , K0010     , K11     , K12    , K13   , K14    , K15     , K16     , K17    , K18     , K19       , K110    , K111    , K112     , K113    , K114   , K115    , K116    , K117    , K118   , K119  , K120  , \
K21_2   , K22_2 , K0020     , K21     , K22    , K23   , K24    , K25     , K26     , K27    , K28     , K29       , K210    , K211    , K212     , K213    , K214   , K215    , K216    , K217    , K218   , K219  , K220  , \
K21_3   , K22_3 , K0030     , K31     , K32    , K33   , K34    , K35     , K36     , K37    , K38     , K39       , K310    , K311    , K312     ,           K314   , K315    , K316    , K317    , K318   , K319  ,         \
K21_4   , K22_4 , K0040     , K41     , K42    , K43   , K44    , K45     , K46     , K47    , K48     , K49       , K410    , K411    ,            K413    ,          K415    ,           K417    , K418   , K419  , K420  , \
K21_5   ,         K0050     , K51     , K52    ,         K54    , K55     ,           K57    , K58     ,             K510    , K511    , K512     , K513    , K514   , K515    , K516    , K517    ,         K519            \
*/
[_NORMAL] = LAYOUT_all(
                  KC_ESC    , KC_F1   , KC_F2  , KC_F3 , KC_F4  , KC_F5   , KC_F6   , KC_F7  , KC_F8   , KC_F9     , KC_F10  , KC_F11  , KC_F12   ,           KC_PSCR, KC_SLCK , KC_PAUS , \
M3_SW   , M4_SW , KC_GRV    , KC_1    , KC_2   , KC_3  , KC_4   , KC_5    , KC_6    , KC_7   , KC_8    , KC_9      , KC_0    , KC_MINS , KC_EQL   , KC_BSPC  ,KC_COPY, KC_CUT  , KC_PSTE , KC_NLCK , KC_PSLS , KC_PAST , KC_PMNS , \
M5_SW   , M6_SW , KC_TAB    , KC_Q    , KC_W   , KC_E  , KC_R   , KC_T    , KC_Y    , KC_U   , KC_I    , KC_O      , KC_P    , KC_LBRC , KC_RBRC  , KC_ENT   ,KC_INS , KC_HOME , KC_PGUP , KC_P7   , KC_P8   , KC_P9   , KC_PPLS , \
M7_SW   , M8_SW , MO(_ALT1) , KC_A    , KC_S   , KC_D  , KC_F   , KC_G    , KC_H    , KC_J   , KC_K    , KC_L      , KC_SCLN , KC_QUOT , KC_BSLS  ,           KC_DEL , KC_END  , KC_PGDN , KC_P4   , KC_P5   , KC_P6   , \
M9_SW   , M10_SW, KC_LSFT   , KC_Z    , KC_X   , KC_C  , KC_V   , KC_B    , KC_N    , KC_M   , KC_COMM , KC_DOT    , KC_SLSH , KC_A    ,            KC_RSFT  ,         KC_UP   ,           KC_P1   , KC_P2   , KC_P3   , KC_PENT , \
M11_SW  ,         KC_LCTL   , KC_LGUI , KC_LALT,         KC_SPC , FN_SW   ,           KC_SPC , KC_RALT ,             KC_RGUI , KC_APP  , KC_RCTL  , MO(_ALT1),KC_LEFT, KC_DOWN , KC_RGHT , KC_P0   ,           KC_PDOT \
)
};

