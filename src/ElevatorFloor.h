/*
 * ElevatorFloor.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#ifndef ELEVATORFLOOR_H_
#define ELEVATORFLOOR_H_

class ElevatorInstance;
class ElevatorApplication;
class ElevatorConf;
class ElevatorController;
class ElevatorFloor {
public:
	int initElevatorFloor();
	int upwardRequest(int elevatorFloorNum, int elevatorInstanceNum);
	int downwardRequest(int elevatorFloorNum, int elevatorInstanceNum);
	int cancelUpwardRequest(int elevatorFloorNum, int elevatorInstanceNum);
	int cancelDownwardRequest(int elevatorFloorNum, int elevatorInstanceNum);
	ElevatorFloor();
	virtual ~ElevatorFloor();
};

#endif /* ELEVATORFLOOR_H_ */
