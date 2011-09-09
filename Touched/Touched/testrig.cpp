//#include "humanoid.h"
//#include "human.h"
//using namespace std;
//
//int main(void) {
//
//	humanoid Jim(10, 10, 10, 10, 2, "Jim");
//
//	cout << "Jim Alive? " << Jim.isAlive() << endl; 
//	cout << "Jim hp? " <<  Jim.getHp() << endl;
//	cout << "Jim mp? " <<  Jim.getMp() << endl;
//	cout << "Jim vit? " <<  Jim.getStat('v') << endl;
//	cout << "Jim agi? " <<  Jim.getStat('a') << endl;
//	cout << "Jim dex? " <<  Jim.getStat('d') << endl;
//	cout << "Jim str? " <<  Jim.getStat('s') << endl;
//	cout << "Jim has mp? " <<  Jim.hasMp() << endl;
//	cout << "Jim lvl? " <<  Jim.getStat('l') << endl;
//	Jim.isHit(10);
//	cout << "Jim hp after being hit for 10 " <<  Jim.getHp() << endl<< endl<< endl<< endl;
//
//
//	humanoid kim(9, 2, 5, 7, 3, "kim");
//
//	cout << "kim Alive? " <<  kim.isAlive() << endl;
//	cout << "kim hp? " <<  kim.getHp() << endl;
//	cout << "kim mp? " <<  kim.getMp() << endl;
//	cout << "kim vit? " <<  kim.getStat('v') << endl;
//	cout << "kim agi? " <<  kim.getStat('a') << endl;
//	cout << "kim dex? " <<  kim.getStat('d') << endl;
//	cout << "kim str? " <<  kim.getStat('s') << endl;
//	cout << "kim has mp? " <<  kim.hasMp() << endl;
//	cout << "kim lvl? " <<  kim.getStat('l') << endl;
//	kim.isHit(10);
//	cout << "kim after hit for 10 " <<  kim.getHp() << endl;
//
//	Jim.isHit(kim.hit(Jim.getStat('v')));
//	cout << "FIGHT BEGINS!" <<endl<< "kim attacks Jim!! Jim's HP is at:" << Jim.getHp() <<endl;
//	Sleep(2000);
//	cout << "kim attacks Jim again!";
//	Jim.isHit(8);
//	cout << endl;
//
//
//	human Human(10,10,10,10,10,"HUMAN","Human");
//	cout << "Human Alive? " <<  Human.isAlive() << endl;
//	cout << "Human hp? " <<  Human.getHp() << endl;
//	cout << "Human mp? " <<  Human.getMp() << endl;
//	cout << "Human vit? " <<  Human.getStat('v') << endl;
//	cout << "Human agi? " <<  Human.getStat('a') << endl;
//	cout << "Human dex? " <<  Human.getStat('d') << endl;
//	cout << "Human str? " <<  Human.getStat('s') << endl;
//	cout << "Human has mp? " <<  Human.hasMp() << endl;
//	cout << "Human lvl? " <<  Human.getStat('l') << endl;
//	kim.isHit(10);
//	cout << "Human after hit for 10 " <<  kim.getHp() << endl;
//	cout << "Human race? " <<  Human.getRace() << endl;
//
//	Sleep(90000);
//	return 0;
//
//
//}