#ifndef HUMANOID_H
#define HUMANOID_H

#include <math.h>
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;
#define ushort unsigned short


class humanoid{
private:
	string name;
	ushort hp;
	ushort mp;
	ushort strength;
	ushort vitality;
	ushort dexterity;
	ushort agility;
	ushort level;
public:
	ushort getStat(char stat);
	ushort getHp();
	ushort getMp();
	string getName();
	bool isAlive();
	bool hasMp();
	void isHit(ushort damage);
	ushort hit(ushort vit);


	humanoid(ushort vit, ushort str, ushort dex, ushort agi, ushort level, string name);
	~humanoid();


protected:
	void setHealth(ushort vit, ushort RACE_BONUS);
	void setMp(ushort dex);
	void setName(string newname);
	void isDead();



};

#endif 