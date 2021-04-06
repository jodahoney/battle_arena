#include <iostream>
#include "human.h"
#include "creature.h"

using namespace std;

namespace cs_creature {


	string Human::getSpecies()
	{
		return "Human";
	}

/*
	int Human::getDamage() const
	{
		int damage;
		damage = Creature::getDamage();

		//cout << "Human attacks for " << damage << " points!\n";
		return damage;
	}
*/

}
