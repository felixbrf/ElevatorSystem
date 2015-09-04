/*
 * ElevatorInstance.h
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#ifndef ELEVATORINSTANCE_H_
#define ELEVATORINSTANCE_H_

class ElevatorInstance {
private:
	int _currentElevatorUnitNum;
	int _elevatorInstanceMode;
public:
	int currentElevatorUnitNum();
	int elevatorInstanceMode();
//	ElevatorInstance();
//	virtual ~ElevatorInstance();
};

#endif /* ELEVATORINSTANCE_H_ */
