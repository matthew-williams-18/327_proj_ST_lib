//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

using namespace std;

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {

	vector<unique_ptr<Smalltalk>> aChattyVector;


	for(int i = 0; i < numBrit; i++){
		unique_ptr<Smalltalk> pPerson (new Smalltalk_Brit(i+1)); //i+1 so first one is 1, not 0
		aChattyVector.push_back(move(pPerson));
	}

	for(int i = 0; i < numAmerican; i++){
			unique_ptr<Smalltalk> pPerson (new Smalltalk_American(i+1));
			aChattyVector.push_back(move(pPerson));
	}

	for(int i = 0; i < numbAmericanDonutEnthusiest; i++){
			unique_ptr<Smalltalk> pPerson (new ST_American_DonutEnthusiest(i+1));
			aChattyVector.push_back(move(pPerson));
	}

	int NUM_PEOPLE = aChattyVector.size();

	//if more watches than people, iterate 'NUM_PEOPLE' times; otherwise iterate 'numWatches' times
	for(int i = 0; i < (numWatches > NUM_PEOPLE ? NUM_PEOPLE : numWatches); i++){
		unique_ptr<Watch> aWatch(new Watch());
		aChattyVector[i]->giveWatch(aWatch);
	}

	return move(aChattyVector);
}
