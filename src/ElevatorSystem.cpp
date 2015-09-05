//============================================================================
// Name        : ElevatorSystem.cpp
// Author      : Felix
// Version     : 1.0
// Copyright   : Copyright (c) 2015, PKU
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <pthread.h>
#include "ElevatorInstance.h"
#include "ElevatorController.h"
#include "ElevatorApplication.h"
#include "ElevatorConf.h"
#include "ElevatorFloor.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	ElevatorInstance elevatorInstance;
	cout << "currentElevatorNum" << elevatorInstance.currentElevatorUnitNum() << endl;
	ElevatorApplication elevatorApplication;
	elevatorApplication.startElevatorSystem();
	return 0;
}
