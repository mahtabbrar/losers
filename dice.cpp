#include "dice.hpp"
#include <cstdlib>
using namespace std;

Dice::Dice()
{
	sides = 6;
}

Dice::Dice(int userSides)
{
	sides = userSides;
}

int Dice::rollDice()
{
	int i;
	i = (rand()%sides)+1;
	return i;
}

int Dice::roll2()
{
	int i;
	int i2;
	
	i = (rand()%sides)+1;
	i2 = (rand()%sides)+1;

	return (i+i2);
}

int Dice::roll3()
{
	int i;
	int i2;
	int i3;

	i = (rand()%sides)+1;
	i2 = (rand()%sides)+1;
	i3 = (rand()%sides)+1;

	return (i+i2+i3);
}
