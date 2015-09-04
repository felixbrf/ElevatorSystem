/*
 * ElevatorApplication.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#ifndef ELEVATORAPPLICATION_H_
#define ELEVATORAPPLICATION_H_

class ElevatorInstance;
class ElevatorController;
class ElevatorFloor;
class ElevatorConf;
class ElevatorApplication {
public:
	int startElevatorSystem();
	int stopElevatorSystem();
	int restartElevatorSystem();
	int pauseElevatorSystem();
	ElevatorApplication();
	virtual ~ElevatorApplication();
};

#endif /* ELEVATORAPPLICATION_H_ */
