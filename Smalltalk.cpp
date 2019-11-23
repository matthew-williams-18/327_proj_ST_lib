/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: Matthew Williams
 */


#include <string>
#include <vector>
#include <memory>

#include "includes/Watch.h"
#include "includes/Smalltalk.h"
#include "includes/constants.h"

using namespace std;



Smalltalk::Smalltalk::Smalltalk(string myNationality,int iPerson):nationality(myNationality),iPerson(iPerson), current_phrase(0){}

Smalltalk::Smalltalk::~Smalltalk(){}

string Smalltalk::Smalltalk::saySomething(){
	int NUM_PHRASES = mySmallTalk.size();
	current_phrase++;

	return nationality + " " + to_string(iPerson) + ": " + mySmallTalk[(current_phrase-1)%NUM_PHRASES];
}

string Smalltalk::Smalltalk::getTime(){
	if(pWatch)
		return THE_CURRENT_TIME_IS + " " + pWatch->getTime();
	return I_DO_NOT_HAVE_A_WATCH;
}

unique_ptr<Watch> Smalltalk::Smalltalk::takeWatch(){
	if(pWatch)
		return move(pWatch);
	return unique_ptr<Watch>{};
}

bool Smalltalk::Smalltalk::giveWatch(unique_ptr<Watch> &pWatch){
	if(this->pWatch)
		return false;

	this->pWatch = move(pWatch);
	return true;
}


