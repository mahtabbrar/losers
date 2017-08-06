#include "creature.hpp"
#include <string>
#include<iostream>

using namespace std;

Creature::Creature()
{

}

string Creature::getName()
{
	return name;
}

int Creature::getAttack()
{
	return attack;
}

int Creature::getDefense()
{
	return defense;
}

int Creature::getArmor()
{
	return armor;
}

int Creature::getStrength()
{
	return strength;
}


