#include <iostream>
#include "demon.h"
#include "balrog.h"

using namespace std;

namespace cs_creature {

	string Balrog::getSpecies()
	{
		return "Balrog";
	}

	int Balrog::getDamage()
	{
		int damage,
			damage2;


		//cout << "The Balrog";
		damage = Demon::getDamage();

		damage2 = (rand() % getStrength()) + 1;
		cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!\n";

		damage += damage2;
		return damage;
	}
}
