#ifndef HUMAN_H
#define HUMAN_H

#include "humanoid.h"


class human : public humanoid {



public:
	human(ushort vit, ushort str, ushort dex, ushort agi, ushort level, string name, string raceName);
	void setHealth(ushort vit);
	void setRace(string race);
	string getRace();
private:
	string race;
	ushort RACE_BONUS;
};



#endif