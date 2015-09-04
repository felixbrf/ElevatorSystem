//============================================================================
// Name        : ElevatorSystem.cpp
// Author      : Felix
// Version     : 1.0
// Copyright   : Copyright (c) 2015, PKU
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ElevatorInstance.cpp"
#include "ElevatorController.cpp"
#include "ElevatorApplication.cpp"
#include "ElevatorConf.cpp"
#include "ElevatorFloor.cpp"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	ElevatorInstance elevatorInstance;
	cout << "currentElevatorNum" << elevatorInstance.currentElevatorUnitNum() << endl;
	return 0;
}
