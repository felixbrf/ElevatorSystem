/*
 * ElevatorController.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#ifndef ELEVATORCONTROLLER_H_
#define ELEVATORCONTROLLER_H_

class ElevatorInstance;
class ElevatorApplication;
class ElevatorConf;
class ElevatorFloor;
class ElevatorController {
public:
	int initElevatorController();
	int controlElevatorInstanceRunToTargetFloor(int elevatorInstanceNum,
			int targetFloorNum);
	int controlElevatorInstanceOpenDoor(ElevatorInstance* elevatorInstance);
	int controlElevatorInstanceCloseDoor(ElevatorInstance* elevatorInstnace);
	ElevatorController();
	virtual ~ElevatorController();
};

#endif /* ELEVATORCONTROLLER_H_ */
