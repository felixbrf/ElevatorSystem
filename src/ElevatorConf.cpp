/*
 * ElevatorConf.cpp
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

//#include "ElevatorInstance.cpp"
//#include "ElevatorController.cpp"
//#include "ElevatorFloor.cpp"
#ifndef CLASS_ELEVATORCONF_CPP
#define CLASS_ELEVATORCONF_CPP
class ElevatorInstance;
class ElevatorController;
class ElevatorFloor;
class ElevatorConf {
public:
	int initElevatorConf() {
		return 0;
	}
	int loadElevatorInstanceConf() {
		return 0;
	}
	int loadElevatorContorllerConf() {
		return 0;
	}
	int loadElevatorFloorConf() {
		return 0;
	}
	int saveElevatorInstanceConf(ElevatorInstance* elevatorInstance) {
		return 0;
	}
	int saveElevatorControllerConf(ElevatorController* elevatorController) {
		return 0;
	}
	int saveElevatorFloorConf(ElevatorFloor* elevatorFloor) {
		return 0;
	}
};

/*inline
ElevatorConf::ElevatorConf() {
	// TODO Auto-generated constructor stub

}

ElevatorConf::~ElevatorConf() {
	// TODO Auto-generated destructor stub
}*/

#endif
