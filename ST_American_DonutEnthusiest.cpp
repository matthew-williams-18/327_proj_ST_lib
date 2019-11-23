/*
 * ST_American_DonutEnthusiest.cpp
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
#include "includes/ST_American_DonutEnthusiest.h"
#include "includes/constants.h"

using namespace std;


ST_American_DonutEnthusiest::ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i):Smalltalk_American::Smalltalk_American(AMERICAN_DE, i){
	this->populatePhrases();
}

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(){
	this->populatePhrases();
}

void ST_American_DonutEnthusiest::ST_American_DonutEnthusiest::populatePhrases(){
	Smalltalk_American::Smalltalk_American::populatePhrases();
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}
