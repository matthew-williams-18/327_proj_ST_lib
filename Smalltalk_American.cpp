/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 21, 2019
 *      Author: Matthew Williams
 */

#include <string>
#include <vector>
#include <memory>

#include "includes/Watch.h"
#include "includes/Smalltalk.h"
#include "includes/Smalltalk_American.h"
#include "includes/constants.h"

using namespace std;


Smalltalk_American::Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk::Smalltalk(AMERICAN, iPerson){
	this->populatePhrases();
}

Smalltalk_American::Smalltalk_American::Smalltalk_American(string myNationality, int iPerson):Smalltalk::Smalltalk(myNationality, iPerson){

}

Smalltalk_American::Smalltalk_American::~Smalltalk_American(){}

void Smalltalk_American::Smalltalk_American::populatePhrases(){
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}

