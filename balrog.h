#pragma once
#ifndef BALROG_H
#define BALROG_H
#include "demon.h"

using namespace std;

namespace cs_creature {
	class Balrog : public Demon
	{
	public:
		// default constructor
		Balrog() : Demon()
		{

		}
		// constructor
		Balrog(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints)
		{

		}

		int getDamage();

		virtual string getSpecies() override;
	};
}


#endif