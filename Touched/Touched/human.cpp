#include "human.h"



	human::human(ushort vit, ushort str, ushort dex, ushort agi, ushort level, string name,string raceName):humanoid( vit,  str,  dex,  agi,  level, name){
		setRace(raceName);
		RACE_BONUS = 10;
		humanoid::setHealth(vit, RACE_BONUS);
	}

	void human::setRace(string raceName){
		race = raceName;
	}

	string human::getRace(){
		return race;
	}


	