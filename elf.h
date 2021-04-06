#pragma once
#ifndef ELF_H
#define ELF_H
#include "creature.h"

using namespace std;

namespace cs_creature {
	class Elf : public Creature
	{
	public:
		// default constructor
		Elf() : Creature()
		{

		}
		// constructor
		Elf(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints)
		{

		}

		int getDamage();

		virtual string getSpecies() override;
	};
}


#endif