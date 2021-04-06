#pragma once
#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "demon.h"

using namespace std;

namespace cs_creature {
	class Cyberdemon : public Demon
	{
	public:
		// default constructor
		Cyberdemon() : Demon()
		{

		}
		// constructor
		Cyberdemon(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints)
		{

		}

		//int getDamage() const;

		virtual string getSpecies() override;
	};
}


#endif