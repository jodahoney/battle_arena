#include<iostream>
#include<cstdlib>
#include<ctime>
#include "creature.h"
#include "human.h"
#include "elf.h"
#include "demon.h"
#include "cyberdemon.h"
#include "balrog.h"

using namespace std;
using namespace cs_creature;

const int NUM_CREATURES = 4;

// Battle arena function header
void battleArena(Creature& Creature1, Creature& Creature2);

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

	Elf e(24, 50);
	Balrog b(10, 50);
	Human h(100, 50);
	Cyberdemon c(50, 50);

	string champion, contender;
	int battleRound = 1;

	cout << "**********************************\n"
		<< "WELCOME TO BATTLE ARENA\n"
		<< "**********************************\n";

	battleArena(e, b);

}


void battleArena(Creature& Creature1, Creature& Creature2)
{
	int roundCounter = 1;
	int Creature1Hp = Creature1.getHitpoints();
	int Creature2Hp = Creature2.getHitpoints();
	string Creature1Species = Creature1.getSpecies();
	string Creature2Species = Creature2.getSpecies();

	cout << "Fighter # 1 is a(n) "
		<< Creature1Species
		<< endl << endl
		<< "Fighter # 2 is a(n) "
		<< Creature2Species
		<< endl << endl;

	do
	{
		cout << Creature1Species << " starts round " << roundCounter << " with " << Creature1Hp
			<< " hitpoints."<< endl
			<< Creature2Species << " starts the round with " << Creature2Hp 
			<< " hitspoints." << endl;
		
		cout << endl << "ROUND " << roundCounter << " BEGINS! FIGHT!\n"
			<< "---------------------\n" << endl;

		int Creature1Dmg = Creature1.getDamage();
		cout << endl;
		int Creature2Dmg = Creature2.getDamage();
		cout << endl;
				
		cout << Creature1Species << " hits for " << Creature1Dmg << " reducing " << Creature2Species
			<< " health down to " << Creature2Hp - Creature1Dmg << endl << endl;

		cout << Creature2Species << " hits for " << Creature2Dmg << " reducing " << Creature1Species
			<< " health down to "
			<< Creature1Hp - Creature2Dmg << endl << endl;

		++roundCounter;
		Creature1Hp -= Creature2Dmg;
		Creature2Hp -= Creature1Dmg;
	} while (Creature1Hp > 0 && Creature2Hp > 0);

	if (Creature1Hp <= 0 && Creature2Hp <= 0)
		cout << Creature1Species << " and " << Creature2Species << " have tied!\n";
	else if (Creature1Hp > Creature2Hp)
		cout << Creature1Species << " wins!\n";
	else if (Creature2Hp > Creature1Hp)
		cout << Creature2Species << " wins!\n";

}

// SAMPLE OUTPUT
/*
**********************************
WELCOME TO BATTLE ARENA
**********************************
Fighter # 1 is a(n) Elf

Fighter # 2 is a(n) Balrog

Elf starts round 1 with 50 hitpoints.
Balrog starts the round with 50 hitspoints.

ROUND 1 BEGINS! FIGHT!
---------------------

The Elf attacks for 1 points!
Magical attack inflicts 1 additional damage points!

The Balrog attacks for 8 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 8 additional damage points!

Elf hits for 2 reducing Balrog health down to 48

Balrog hits for 66 reducing Elf health down to -16

Balrog wins!
*/