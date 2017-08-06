#ifndef DICE_HPP
#define DICE_HPP

#include <iostream>

using namespace std;

class Dice
{
private:

protected:
        int sides;
public:
        Dice();
        Dice(int);
        int rollDice();
	int roll2();
	int roll3();
};
#endif
