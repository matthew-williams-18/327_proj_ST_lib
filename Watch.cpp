/*
 * Watch.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <ctime>
#include "./includes/Watch.h"
#include <iostream>

Watch::Watch() {
}

Watch::~Watch() {
}

std::string Watch::getTime() {
//	std::cout << "\n\nIn getTime()\n\n";
	const int CONVERT_TO_12_HOUR = 12;
	time_t rawtime;
	struct tm * timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	
	std::string curtime = "The time is: "
			+ std::to_string(timeinfo->tm_min) + " minutes after"
			+ std::to_string(timeinfo->tm_hour % CONVERT_TO_12_HOUR);			
	return curtime;
}

