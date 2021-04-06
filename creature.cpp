#include<iostream>
#include<cstdlib>
#include<ctime>
#include "creature.h"

using namespace std;

namespace cs_creature {
    // Default constructor of creature
    Creature::Creature()
    {
        strength = 10;
        hitpoints = 10;
    }

    // Parametized creature constructor
    Creature::Creature(int newStrength, int newHitPoints)
    {
        strength = newStrength;
        hitpoints = newHitPoints;
    }

    /*
    string Creature::getSpecies() const
    {
        return "Creature";
    }
    */

    int Creature::getStrength()const
    {
        return  strength;
    }
    void Creature::setStrength(int s)
    {
        strength = s;
    }

    int Creature::getHitpoints()const
    {
        return  hitpoints;
    }
    void Creature::setHitpoints(int hp)
    {
        hitpoints = hp;
    }

    int Creature::getDamage() {
        int damage;

        // All Creatures inflict damage which is a random number up to their strength
        damage = (rand() % strength) + 1;

        cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;

        return damage;
    }
}
