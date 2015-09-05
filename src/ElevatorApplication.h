/*
 * ElevatorApplication.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#include <iostream>
#include <pthread.h>
#ifndef ELEVATORAPPLICATION_H_
#define ELEVATORAPPLICATION_H_
using namespace std;
class ElevatorInstance;
class ElevatorController;
class ElevatorFloor;
class ElevatorConf;
class ElevatorApplication {
public:
	int startElevatorSystem(void);
	int stopElevatorSystem(void);
	int restartElevatorSystem(void);
	int pauseElevatorSystem(void);
	ElevatorApplication(void);
	virtual ~ElevatorApplication(void);
};

#endif /* ELEVATORAPPLICATION_H_ */
