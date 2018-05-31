/*
 * config.h
 *
 *  Created on: May 15, 2018
 *      Author: nicks
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include "hardware.h"

//#define BOARD_ID TARGET_ADDRESS_GROUND
#define BOARD_ID TARGET_ADDRESS_FLIGHT

#if BOARD_ID == TARGET_ADDRESS_GROUND

#define WATER_DELUGE_CHANNEL 	vlv4

#endif



#if BOARD_ID == TARGET_ADDRESS_FLIGHT

#define IGNITER_CHANNEL			vlv7
#define OX_VALVE_MOTOR			0
#define FUEL_VALVE_MOTOR		1

#define OX_OPEN 150
#define OX_CLOSE 230
#define FUEL_OPEN 225
#define	FUEL_CLOSE	90

#endif

#endif /* CONFIG_H_ */
