/*************************************************
* MAX7221 / MAX7219 LIBRARY
* 64 CHANNEL CONSTANT CURRENT DRIVER
*
* OCTOBER 26 2016
* ANKIT BHATNAGAR
* ANKIT.BHATNAGARINDIA@GMAIL.COM
* ***********************************************/

#ifndef _MAX7221_7219_SPI_H_
#define _MAX7221_7219_SPI_H_

#include "user_interface.h"
#include <ets_sys.h>
#include "gpio.h"
#include "ESP8266_SPI.h"

#define MAX7221_TRUE	0x01
#define MAX7221_FALSE	0x00

#define MAX7221_ADDRESS_NOOP			0x00
#define MAX7221_ADDRESS_DIGIT_0			0x01
#define MAX7221_ADDRESS_DIGIT_1			0x02
#define MAX7221_ADDRESS_DIGIT_2			0x03
#define MAX7221_ADDRESS_DIGIT_3			0x04
#define MAX7221_ADDRESS_DIGIT_4			0x05
#define MAX7221_ADDRESS_DIGIT_5			0x06
#define MAX7221_ADDRESS_DIGIT_6			0x07
#define MAX7221_ADDRESS_DIGIT_7			0x08
#define MAX7221_ADDRESS_DECODE_MODE		0x09
#define MAX7221_ADDRESS_INTENSITY		0x0A
#define MAX7221_ADDRESS_SCAN_LIMIT		0x0B
#define MAX7221_ADDRESS_SHUTDOWN		0x0C
#define MAX7221_ADDRESS_DISPLAY_TEST	0x0F

#define MAX7221_SET_INTENSITY_LVL_0		0x00
#define MAX7221_SET_INTENSITY_LVL_1		0x01
#define MAX7221_SET_INTENSITY_LVL_2		0x02
#define MAX7221_SET_INTENSITY_LVL_3		0x03
#define MAX7221_SET_INTENSITY_LVL_4		0x04
#define MAX7221_SET_INTENSITY_LVL_5		0x05
#define MAX7221_SET_INTENSITY_LVL_6		0x06
#define MAX7221_SET_INTENSITY_LVL_7		0x07
#define MAX7221_SET_INTENSITY_LVL_8		0x08
#define MAX7221_SET_INTENSITY_LVL_9		0x09
#define MAX7221_SET_INTENSITY_LVL_10    0x0A
#define MAX7221_SET_INTENSITY_LVL_11	0x0B
#define MAX7221_SET_INTENSITY_LVL_12	0x0C
#define MAX7221_SET_INTENSITY_LVL_13    0x0D
#define MAX7221_SET_INTENSITY_LVL_14	0x0E
#define MAX7221_SET_INTENSITY_LVL_15	0x0F

#define MAX7221_SCAN_LIMIT_DIG0			0x00
#define MAX7221_SCAN_LIMIT_DIG0_DIG1	0x01
#define MAX7221_SCAN_LIMIT_DIG0_DIG2	0x02
#define MAX7221_SCAN_LIMIT_DIG0_DIG3	0x03
#define MAX7221_SCAN_LIMIT_DIG0_DIG4	0x04
#define MAX7221_SCAN_LIMIT_DIG0_DIG5	0x05
#define MAX7221_SCAN_LIMIT_DIG0_DIG6	0x06
#define MAX7221_SCAN_LIMIT_DIG0_DIG7	0x07

#define MAX7221_DATA_SHUTDOWN			0x00
#define MAX7221_DATA_NORMAL				0x01

#define MAX7221_DISPLAY_TEST_ON			0x01
#define MAX7221_DISPLAY_TEST_OFF		0x00

#define MAX7221_DATA_NO_DECODE					0x00
#define MAX7221_DATA_CODE_B_DECODE_DIG0			0x01
#define MAX7221_DATA_CODE_B_DECODE_DIG0_DIG3	0x0F
#define MAX7221_DATA_CODE_B_DECODE_DIG0_DIG7	0xFF

//FUNCTION POINTER TO FUNCTION USED BY LIBRARY
//TO CLOCK OUT THE DATA
void (*MAX7221_7219_transport_pointer)(uint32_t, uint32_t);

void MAX7221_7219_init(void);
void MAX7221_7219_send(uint8_t address, uint8_t data);
void MAX7221_7219_draw_digit(uint8_t digit_num, uint8_t digit_val);
void MAX7221_7219_clear_display(void);
void MAX7221_7219_display_test( uint8_t on);

#endif
