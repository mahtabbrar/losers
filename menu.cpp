#include "menu.hpp"
#include "creature.hpp"
#include "vampire.hpp"
#include "medusa.hpp"
#include "blue.hpp"
#include "harry.hpp"
#include "barbarian.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int menu()
{	
	int selection1;
	int selection2;
	string player1;
	string player2;
	Creature *creature1;
	Creature *creature2;
	do
	{

        cout << "Welcome to a fantasy fighting game! Please choose 2 fighters below." << endl;

        cout << "1. Vampire" << endl;

        cout << "2. Medusa" << endl;

        cout << "3. Barbarian" << endl;

        cout << "4. Blue Men" << endl;

	cout << "5. Harry Potter" << endl;
	
	cout << "6. Exit the game" << endl;

        cin >> player1;

        while(validatedInput(player1) == false)
        {
                cout << "It looks like you had an invalid input. Try again." << endl;
                cin >> player1;
                validatedInput(player1);
        }

        selection1 = atoi(player1.c_str());

        if(selection1 == 1)
        {
		creature1 = new Vampire;
        }

        else if(selection1 == 2)
        {
		creature1 = new Medusa;	
        }

        else if(selection1 == 3)
        {
		creature1 = new Barbarian;
	}
        
	else if(selection1 == 4)
        {
		creature1 = new Blue;
        }

	else if(selection1 == 5)
        {
		creature1 = new Harry;
        }

        else if(selection1 == 6)
        {
		return 0;
        }

	cout << "Please enter the second character to fight. You can also hit 6 to exit." << endl;

	cin >> player2;

        while(validatedInput(player2) == false)
        {
                cout << "It looks like you had an invalid input. Try again." << endl;
                cin >> player2;
                validatedInput(player2);
        }

        selection2 = atoi(player2.c_str());

        if(selection2 == 1)
        {
                creature2 = new Vampire;
        }

        else if(selection2 == 2)
        {
                creature2 = new Medusa;
        }

        else if(selection2 == 3)
        {
                creature2 = new Barbarian;
        }

        else if(selection2 == 4)
        {
                creature2 = new Blue;
        }

        else if(selection2 == 5)
        {
                creature2 = new Harry;
		//cout << creature2->getName() << endl;
        }

        else if(selection2 == 6)
        {
                return 0;
        }


	}while (selection1 != 6); 
}

bool validatedInput(string checked)
{
	for(int i=0;i<checked.length();i++)
	{
		if(!(checked.at(i) >='0' && checked.at(i) <='6'))
		{
			return false;
		}
	}
	
	return true;
}

bool validatedString(string checked)
{
	char placer;
	for(int i=0; i<checked.size();i++)
	{
		placer = tolower(checked[i]);
		if(!((int)placer >= 97 && (int)placer <= 122 || (int)placer == 32))
		{
			return false;
		}
	}
	return true;
	
}


