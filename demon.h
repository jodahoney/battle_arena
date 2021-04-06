#pragma once
#ifndef DEMON_H
#define DEMON_H
#include "creature.h"

using namespace std;

namespace cs_creature {
	class Demon : public Creature
	{
	public:
		// default constructor
		Demon() : Creature()
		{

		}
		// constructor
		Demon(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints)
		{

		}

		int getDamage();

		virtual string getSpecies() override;
	};
}


#endif