/*
 * ElevatorInstance.cpp
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#include "ElevatorInstance.h"

int _currentElevatorUnitNum;
int _elevatorInstanceMode;
int ElevatorInstance::initElevatorInstance() {
	return 0;
}
int ElevatorInstance::currentElevatorUnitNum() {
	return _currentElevatorUnitNum;
}
int ElevatorInstance::elevatorInstanceMode() {
	return _elevatorInstanceMode;
}
int ElevatorInstance::requestRunToTargetFloor(int targetFloorNum, int elevatorInstanceNum) {
	return 0;
}
int ElevatorInstance::responseRunToTargetFloor(int targetFloorNum, int elevatorInstanceNum) {
	return 0;
}
int ElevatorInstance::resetElevatorInstance(int elevatorInstanceNum) {
	return 0;
}
ElevatorInstance::ElevatorInstance() {
	_currentElevatorUnitNum = 0;
	_elevatorInstanceMode = 0;
	// TODO Auto-generated constructor stub
}
ElevatorInstance::~ElevatorInstance() {
	// TODO Auto-generated destructor stub
}

