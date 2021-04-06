// BASE CLASS
#pragma once
#ifndef CREATURE_H
#define CREATURE_H

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace cs_creature {
    class Creature {
    private:
        int strength;
        int hitpoints;

    public:
        Creature();
        Creature(int newStrength, int newHitpoints);

        virtual int getDamage();
        virtual string getSpecies() = 0;

        int getStrength() const;
        void setStrength(int);

        int getHitpoints() const;
        void setHitpoints(int);
    };
}

#endif