/*
 * ElevatorConf.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#ifndef ELEVATORCONF_H_
#define ELEVATORCONF_H_
class ElevatorInstance;
class ElevatorController;
class ElevatorFloor;
class ElevatorApplication;
class ElevatorConf {
	const static int ELEVATOR_INSTANCE_NUM;
	const static int ELEVATOR_FLOOR_NUM;
public:
	int initElevatorConf(void);
	int loadElevatorInstanceConf();
	int loadElevatorContorllerConf();
	int loadElevatorFloorConf();
	int saveElevatorInstanceConf(ElevatorInstance* elevatorInstance);
	int saveElevatorControllerConf(ElevatorController* elevatorController);
	int saveElevatorFloorConf(ElevatorFloor* elevatorFloor);
	ElevatorConf();
	virtual ~ElevatorConf();
};

#endif /* ELEVATORCONF_H_ */
