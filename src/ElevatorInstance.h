/*
 * ElevatorInstance.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#include <iostream>
#ifndef ELEVATORINSTANCE_H_
#define ELEVATORINSTANCE_H_
using namespace std;
class ElevatorApplication;
class ElevatorFloor;
class ElevatorConf;
class ElevatorController;
class ElevatorInstance {
private:
	int _currentElevatorUnitNum;
	int _elevatorInstanceMode;
public:
	int initElevatorInstance(void);
	int currentElevatorUnitNum(void);
	int elevatorInstanceMode(void);
	int requestRunToTargetFloor(int targetFloorNum, int elevatorInstanceNum);
	int responseRunToTargetFloor(int targetFloorNum, int elevatorInstanceNum);
	int resetElevatorInstance(int elevatorInstanceNum);
	int openDoor(int priority, int elevatorInstanceNum);
	int closeDoor(int priority, int elevatorInstanceNum);
	ElevatorInstance();
	virtual ~ElevatorInstance();
};

#endif /* ELEVATORINSTANCE_H_ */
