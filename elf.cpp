#include <iostream>
#include "elf.h"
#include "creature.h"

using namespace std;

namespace cs_creature {

	string Elf::getSpecies()
	{
		return "Elf";
	}

	int Elf::getDamage()
	{
		int damage;
		damage = Creature::getDamage();

		//cout << "Elf attacks for " << damage << " points!\n";

		if ((rand() % 2) == 0) {
			cout << "Magical attack inflicts " << damage << " additional damage points!\n";
			damage *= 2;
		}
		return damage;
	}
}
