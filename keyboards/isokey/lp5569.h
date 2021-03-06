#ifndef _LP5569_H_
#define _LP5569_H_

#include "quantum.h"

#define TML_GLOBAL_ADDR 0x80 //0x40
#define TML_LEFT_ADDR  0x32
#define TML_RIGHT_ADDR 0x35

// register shit
#define REG_CONFIG 0x00
#define REG_CNTRL1 0x01
#define REG_CNTRL2 0x02

// LED controller channels
#define REG_D0_CTRL 0x07
#define REG_D1_CTRL 0x08
#define REG_D2_CTRL 0x09
#define REG_D3_CTRL 0x0a
#define REG_D4_CTRL 0x0b
#define REG_D5_CTRL 0x0c
#define REG_D6_CTRL 0x0d
#define REG_D7_CTRL 0x0e
#define REG_D8_CTRL 0x0f

// Direct PWM control registers
#define REG_D0_PWM 0x16
#define REG_D1_PWM 0x17
#define REG_D2_PWM 0x18
#define REG_D3_PWM 0x19
#define REG_D4_PWM 0x1a
#define REG_D5_PWM 0x1b
#define REG_D6_PWM 0x1c
#define REG_D7_PWM 0x1d
#define REG_D8_PWM 0x1e

// Drive current registers
#define REG_D0_I_CTL 0x22
#define REG_D1_I_CTL 0x23
#define REG_D2_I_CTL 0x24
#define REG_D3_I_CTL 0x25
#define REG_D4_I_CTL 0x26
#define REG_D5_I_CTL 0x27
#define REG_D6_I_CTL 0x28
#define REG_D7_I_CTL 0x29
#define REG_D8_I_CTL 0x2A

// Charge Pump and friends
#define REG_MISC 0x2F
#define REG_PC1 0x30
#define REG_PC2 0x31
#define REG_PC3 0x32
#define REG_MISC_2 0x33
#define REG_STATUS_IRQ 0x3C
#define REG_INT_GPIO 0x3D
#define REG_GLOBAL_VAR 0x3E
#define REG_RESET 0x3F

#define REG_ENGINE_A_VAR 0x42
#define REG_ENGINE_B_VAR 0x43
#define REG_ENGINE_C_VAR 0x44

#define REG_MASTER_FADE_1 0x46
#define REG_MASTER_FADE_2 0x47
#define REG_MASTER_FADE_3 0x48
#define REG_MASTER_FADE_PWM 0x4A

#define REG_PROG1_START 0x4B
#define REG_PROG2_START 0x4C
#define REG_PROG3_START 0x4D
#define REG_PROG_PAGE_SEL 0x4F

// Memory is more confusing - there are 6 pages, sel by addr 4f
#define REG_PROG_MEM_BASE 0x50
// static const uint8_t REG_PROG_MEM_SIZE  0x//
#define REG_PROG_MEM_END 0x6f

#define REG_ENG1_MAP_MSB 0x70
#define REG_ENG1_MAP_LSB 0x71
#define REG_ENG2_MAP_MSB 0x72
#define REG_ENG2_MAP_LSB 0x73
#define REG_ENG3_MAP_MSB 0x74
#define REG_ENG3_MAP_LSB 0x75

#define REG_GAIN_CHANGE 0x76
#define PWM_CONFIG 0x80

void lp5569_init(void);
void lp5569_update(uint8_t level);

#endif /* _LP5569_H_ */

