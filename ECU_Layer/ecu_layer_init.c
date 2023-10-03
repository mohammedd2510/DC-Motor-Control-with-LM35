#include "ecu_layer_init.h"
chr_lcd_4bit_t lcd1 ={
  .lcd_rs.port=PORTC_INDEX,
  .lcd_rs.pin=PIN0,
  .lcd_rs.direction=OUTPUT,
  .lcd_rs.logic=LOW,
  .lcd_en.port=PORTC_INDEX,
  .lcd_en.pin=PIN1,
  .lcd_en.direction=OUTPUT,
  .lcd_en.logic=LOW,
  .lcd_data[0].port=PORTC_INDEX,
  .lcd_data[0].pin=PIN2,
  .lcd_data[0].direction=OUTPUT,
  .lcd_data[0].logic=LOW,
  .lcd_data[1].port=PORTC_INDEX,
  .lcd_data[1].pin=PIN3,
  .lcd_data[1].direction=OUTPUT,
  .lcd_data[1].logic=LOW,
  .lcd_data[2].port=PORTC_INDEX,
  .lcd_data[2].pin=PIN4,
  .lcd_data[2].direction=OUTPUT,
  .lcd_data[2].logic=LOW,
  .lcd_data[3].port=PORTC_INDEX,
  .lcd_data[3].pin=PIN5,
  .lcd_data[3].direction=OUTPUT,
  .lcd_data[3].logic=LOW
};
dc_motor_t dc_motor_1 = {
    .dc_motor_pin[0].port = PORTD_INDEX,
    .dc_motor_pin[0].pin = PIN0,
    .dc_motor_pin[0].logic = DC_MOTOR_OFF_STATUS,
    .dc_motor_pin[0].direction = OUTPUT,
    .dc_motor_pin[1].port = PORTD_INDEX,
    .dc_motor_pin[1].pin = PIN1,
    .dc_motor_pin[1].logic = DC_MOTOR_OFF_STATUS,
    .dc_motor_pin[1].direction = OUTPUT
};

dc_motor_t dc_motor_2 = {
    .dc_motor_pin[0].port = PORTD_INDEX,
    .dc_motor_pin[0].pin = PIN2,
    .dc_motor_pin[0].logic = DC_MOTOR_OFF_STATUS,
    .dc_motor_pin[0].direction = OUTPUT,
    .dc_motor_pin[1].port = PORTD_INDEX,
    .dc_motor_pin[1].pin = PIN3,
    .dc_motor_pin[1].logic = DC_MOTOR_OFF_STATUS,
    .dc_motor_pin[1].direction = OUTPUT
};
void ecu_layer_initialize(void){
     Std_ReturnType ret=E_NOT_OK;
     ret = lcd_4bit_initialize(&lcd1);
     ret &= dc_motor_initialize(&dc_motor_1);
     ret &= dc_motor_initialize(&dc_motor_2);
}
