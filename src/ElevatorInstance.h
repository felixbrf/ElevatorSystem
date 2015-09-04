/*
 * ElevatorInstance.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#ifndef ELEVATORINSTANCE_H_
#define ELEVATORINSTANCE_H_

class ElevatorApplication;
class ElevatorFloor;
class ElevatorConf;
class ElevatorController;
class ElevatorInstance {
private:
	int _currentElevatorUnitNum;
	int _elevatorInstanceMode;
public:
	int initElevatorInstance();
	int currentElevatorUnitNum();
	int elevatorInstanceMode();
	int runToTargetFloor(int targetFloorNum, int elevatorInstanceNum);
	int resetElevatorInstance(int elevatorInstanceNum);
	ElevatorInstance();
	virtual ~ElevatorInstance();
};

#endif /* ELEVATORINSTANCE_H_ */
