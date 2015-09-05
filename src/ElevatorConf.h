/*
 * ElevatorConf.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#include <iostream>
#ifndef ELEVATORCONF_H_
#define ELEVATORCONF_H_
#define ELEVATOR_INSTANCE_NUM 4
#define ELEVATOR_FLOOR_NUM 10
using namespace std;
class ElevatorInstance;
class ElevatorController;
class ElevatorFloor;
class ElevatorApplication;
class ElevatorConf {
	enum ELEVATOR_INSTANCE_DOOR_PRIORITY {
		CUSTOMER_OPER, ADMIN_OPER
	};
public:
	int initElevatorConf(void);
	int loadElevatorInstanceConf();
	int loadElevatorContorllerConf();
	int loadElevatorFloorConf();
	int saveElevatorInstanceConf(ElevatorInstance* elevatorInstance);
	int saveElevatorControllerConf(ElevatorController* elevatorController);
	int saveElevatorFloorConf(ElevatorFloor* elevatorFloor);
	int elevatorInstanceNum(void);
	ElevatorConf();
	virtual ~ElevatorConf();
};

#endif /* ELEVATORCONF_H_ */
