#ifndef MENU_HPP
#define MENU_HPP

#include <string>
#include "creature.hpp"
using namespace std;

int menu();
void fight(Creature, Creature);
bool validatedInput(string);
bool validatedString(string);

#endif
