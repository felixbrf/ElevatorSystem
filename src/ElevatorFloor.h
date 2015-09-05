/*
 * ElevatorFloor.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#include <iostream>
#ifndef ELEVATORFLOOR_H_
#define ELEVATORFLOOR_H_
using namespace std;
class ElevatorInstance;
class ElevatorApplication;
class ElevatorConf;
class ElevatorController;
class ElevatorFloor {
public:
	int initElevatorFloor(void);
	int upwardRequest(int elevatorFloorNum);
	int downwardRequest(int elevatorFloorNum);
	// TBD
	int cancelUpwardRequest(int elevatorFloorNum, int elevatorInstanceNum);
	// TBD
	int cancelDownwardRequest(int elevatorFloorNum, int elevatorInstanceNum);
	ElevatorFloor();
	virtual ~ElevatorFloor();
};

#endif /* ELEVATORFLOOR_H_ */
