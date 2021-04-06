#pragma once
#ifndef HUMAN_H
#define HUMAN_H
#include "creature.h"

using namespace std;

namespace cs_creature {
	class Human : public Creature
	{
	public:
		// default constructor
		Human() : Creature()
		{

		}
		// constructor
		Human(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints)
		{

		}

		//int getDamage() const;

		virtual string getSpecies() override;
	};
}


#endif