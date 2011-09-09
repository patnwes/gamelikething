#include "humanoid.h"



	humanoid::humanoid(ushort vit, ushort str, ushort dex, ushort agi, ushort lvl, string name){
		vitality = vit;
		strength = str;
		dexterity = dex;
		agility = agi;
		level = lvl;
		setHealth(vitality, 0);
		setMp(dexterity);
		setName(name);
	
	}

	humanoid::~humanoid(){}

	void humanoid::setHealth(ushort vit, ushort RACE_BONUS) {
		hp = vit * level + RACE_BONUS;
	}

	void humanoid::setMp(ushort dex) {
		mp = dex * level;
	}

	void humanoid::setName(string newname){
		name = newname;
	}

	bool humanoid::isAlive() {
		if(hp > 0)
			return true;
		else
			return false;
	}
	
	void humanoid::isDead(){
		std::cout << endl << name << " has been returned to the earth";
	}
	
	
	bool humanoid::hasMp() {
		if(mp > 0)
			return true;
		else
			return false;
	}

	void humanoid::isHit(ushort damage){
		hp -= damage;
		if (hp <= 0){
			hp = 0;
			isDead();
		}
	}
	
	

	ushort humanoid::hit(ushort vit) {
		int damage;
		damage = vit - strength;
		if (damage < 0)
			return (ushort) abs(damage);
		else
			return damage % level;
	}
	

	ushort humanoid::getStat(char stat) {
		switch(stat){ 
		case 'v': return vitality;
				  break;

		case 's': return strength;
				  break;
				  
		case 'a': return agility;
				  break;

		case 'd': return dexterity;
				  break;
				  
		case 'l': return level;
				  break;
		default: exit(0);
				 break;
		}
	}
	
	ushort humanoid::getHp(){
		return hp;
	}

	ushort humanoid::getMp(){
		return mp;
	}

	string humanoid::getName(){
		return name;
	}