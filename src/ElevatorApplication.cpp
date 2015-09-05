/*
 * ElevatorApplication.cpp
 *
 *  Created on: Sep 3, 2015
 *      Author: felix
 */

#include "ElevatorApplication.h"
#include "ElevatorConf.h"
int ElevatorApplication::startElevatorSystem() {
	pthread_t tids[ELEVATOR_INSTANCE_NUM];
	for (int i = 0; i < ELEVATOR_INSTANCE_NUM; i++) {
		int ret = pthread_create(&tids[i], NULL, NULL, NULL);
		if (ret != 0) {
			cout << "pthread_create error:error_code" << ret << endl;
		} else {
			cout << "pthread_create success::code" << ret << endl;
		}
	}
	cout << "pthread_create num::code" << ELEVATOR_INSTANCE_NUM << endl;
	pthread_exit(NULL);
	return 0;
}

int ElevatorApplication::stopElevatorSystem() {
	return 0;
}

int ElevatorApplication::restartElevatorSystem() {
	return 0;
}

int ElevatorApplication::pauseElevatorSystem() {
	return 0;
}
ElevatorApplication::ElevatorApplication() {
	// TODO Auto-generated constructor stub
}
ElevatorApplication::~ElevatorApplication() {
	// TODO Auto-generated destructor stub
}
