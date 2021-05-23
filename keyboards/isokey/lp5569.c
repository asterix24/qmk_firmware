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
 * Copyright 2021 Daniele Basile <asteri24@gmail.com>
 *
 */

#include "lp5569.h"
#include "i2c_master.h"
#include "print.h"

void lp5569_update(uint8_t level) {
    i2c_writeReg(TML_GLOBAL_ADDR, REG_D0_PWM, &level, 1, 100);
    i2c_writeReg(TML_GLOBAL_ADDR, REG_D1_PWM, &level, 1, 100);
    i2c_writeReg(TML_GLOBAL_ADDR, REG_D2_PWM, &level, 1, 100);

    i2c_writeReg(TML_GLOBAL_ADDR, REG_D3_PWM, &level, 1, 100);
    i2c_writeReg(TML_GLOBAL_ADDR, REG_D4_PWM, &level, 1, 100);
    i2c_writeReg(TML_GLOBAL_ADDR, REG_D5_PWM, &level, 1, 100);

    i2c_writeReg(TML_GLOBAL_ADDR, REG_D6_PWM, &level, 1, 100);
    i2c_writeReg(TML_GLOBAL_ADDR, REG_D7_PWM, &level, 1, 100);
    i2c_writeReg(TML_GLOBAL_ADDR, REG_D8_PWM, &level, 1, 100);
}

static uint8_t lp5569_data_init[][3] = {{REG_RESET, 0xFF}, {REG_CONFIG, 0x40}, {REG_MISC, 0x53}};

/**
 * @brief	Initialize the LEDs driver
 * @return	None
 */
void lp5569_init(void) {
    for (uint8_t i = 0; i < 3; i++) {
        i2c_status_t ret = i2c_writeReg(TML_GLOBAL_ADDR, lp5569_data_init[i][0], &lp5569_data_init[i][1], 1, 100);
        uprintf("LedDriver cfg ret[%d]\n", ret);
        if(ret == I2C_STATUS_ERROR){
            wait_ms(10);
            ret = i2c_writeReg(TML_GLOBAL_ADDR, lp5569_data_init[i][0], &lp5569_data_init[i][1], 1, 100);
            uprintf("error, retry ret[%d]\n", ret);
        }
    }

}

