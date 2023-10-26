/* 
 * File:   application.c
 * Author: AyaAli
 * Created on September 22, 2023, 10:24 AM
 */
#include "application.h"
 
uint_8 Segment_common_anode[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
uint_8 Segment_common_cathode[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};

uint_8 ones = 0 , tens = 0 ;
int main() {
    
Std_ReturnType ret = E_NOT_OK;
application_initialize();
while(1){
    
    for(tens = 0; tens <10 ; tens++){
        for(ones = 0; ones <10 ; ones++){
         ret = gpio_port_write_logic(PORTD_INDEX, Segment_common_anode[ones]);        
        _delay(250);
        }
      ret = gpio_port_write_logic(PORTC_INDEX, Segment_common_anode[tens]);        
    }
   
  }
  return (EXIT_SUCCESS);
}
void application_initialize(void){
    Std_ReturnType ret = E_NOT_OK;
ret = gpio_port_direction_intialize(PORTC_INDEX, 0x80);
ret = gpio_port_direction_intialize(PORTD_INDEX, 0x80);
ret = gpio_port_write_logic(PORTC_INDEX, 0xC0); 
ret = gpio_port_write_logic(PORTD_INDEX, 0xC0); 
}