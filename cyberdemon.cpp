#include <iostream>
#include "demon.h"
#include "cyberdemon.h"

using namespace std;

namespace cs_creature {

	string Cyberdemon::getSpecies()
	{
		return "Cyberdemon";
	}

	/*
	int Cyberdemon::getDamage() const
	{
		int damage;


		//cout << "The Cyberdemon";
		damage = Demon::getDamage();

		return damage;
	}
	*/
}