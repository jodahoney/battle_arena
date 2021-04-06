#include <iostream>
#include "demon.h"
#include "creature.h"

using namespace std;

namespace cs_creature {

	string Demon::getSpecies()
	{
		return "Demon";
	}

	int Demon::getDamage()
	{
		int damage;
		damage = Creature::getDamage();

		//cout << " attacks for " << damage << " points!\n";
		if (rand() % 4 == 0)
		{
			damage = damage + 50;
			cout << "Demonic attack inflicts 50 additional damage points!\n";
		}

		return damage;
	}
}
