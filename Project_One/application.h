/* 
 * File:   application.h
 * Author: AyaAli
 *
 * Created on September 22, 2023, 10:53 AM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

#include "ECU_Layer/LED/ecu_led.h"
#include "ECU_Layer/Button/ecu_button.h"
#include "ECU_Layer/Relay/ecu_relay.h"
#include "ECU_Layer/Motor/ecu_dc_motor.h"


 void application_initialize(void);
#define _XTAL_FREQ 8000000UL 
#endif	/* APPLICATION_H */

