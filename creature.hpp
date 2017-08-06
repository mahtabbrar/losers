#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>
#include <iostream>

using namespace std;

class Creature
{
private:

protected:
	string name;
	int attack;
	int defense;
	int armor;
	int strength;
	bool dead;
public:
	Creature();
	virtual string getName();
	virtual int getAttack();
	virtual int getDefense();
	virtual int getArmor();
	virtual int getStrength();
};
#endif
