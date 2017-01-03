/*
 * Motor.cpp
 *
 *  Created on: Oct 4, 2016
 *      Author: schutzekatze
 */

#include "Motor.h"

#include "serial_comm.h"

Motor Motor::LEFT_MOTOR(0);
Motor Motor::RIGHT_MOTOR(1);

void Motor::set_power(short power)
{
	this->power = power;

	issue_motor_command(id, power);
}
