#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "windows.h"
#include "stdlib.h"
#include "inventory.h"
#include "battleSystem.h"
#include "Player_Actor.h"
#include "Enemy.h"
#include "World.h" // for encounters
#include "skillAction.h"

using namespace std;

Player_Actor he; //call vars
Enemy en; // call vars
skillAction skilz;
inventory inv;

battleSystem::battleSystem()
{
	turn_Number = 0;
	turnGuageNum = 0; // this is if more than one is set, its usually reset
	aGuage = 0;
	battleMode(); // battle mode
}

//todo: callin party data

//todo: callin enemy encouter data

void battleSystem::battleMode()
{
	//Player_Actor he; //call vars
	//Enemy en; // call vars
	//skillAction skilz;
	// this is where the insanity goes till hp drops for all members of either
	// troop size
	cout << "============ E N G A D G E ============" << endl;

	//enemy set
	for (size_t i = 0; i < en.getParty_num(); i++)
	{
		en.setParty(en.enemyRandEncounter(), i);
		normalOutput("a " + en.callPartyMember(i).getName() + " approches..");
		cin.get();
	}

	if (en.getParty_num() > 1)
	{
		normalOutput("The " + en.callPartyMember(0).getName() + " group challenges...");
		cin.get();
	}
	else
	{
		normalOutput("ENTER " + en.callPartyMember(0).getName() + " " + en.callPartyMember(0).getTitle());
	}

	do
	{
		// action loop
		for (size_t i = 0; i < he.getParty_num(); i++)
		{
			//player set
			playerTGuage(he.callPartyMember(i).getSPDPlus(), he.callPartyMember(i).getSPD(), he.callPartyMember(i).getFp());
		}
		
		for (size_t i = 0; i < en.getParty_num(); i++)
		{
			enemyTGuage(en.callPartyMember(i).getSPDPlus(), en.callPartyMember(i).getSPD(), en.callPartyMember(i).getFp());
		}
		
		turnSystem(turn_Number);

		turn_Number++; // get an operator for this

	} while (battleTime);
	
}

void battleSystem::enemyTroop()
{
	//Enemy en; // call vars
	//skillAction skilz;
}

void battleSystem::allyTroop()
{
	//Player_Actor he; //call vars
	//skillAction skilz;
}

void battleSystem::targetEnemy()
{
	//Player_Actor he; //call vars
	//Enemy en; // call vars
	//skillAction skilz;
}

void battleSystem::aiTargeting()
{
	//Player_Actor he; //call vars
	//Enemy en; // call vars
	//skillAction skilz;
}

void battleSystem::turn()
{
	//Player_Actor he; //call vars
	//inventory inv;

	normalOutput(he.getParty().getName() + " turn...");
	normalOutput("Attack(a),\n Defend(d),\n Hack(h),\n Skills(s),\n Inventory(i)");
	// initialized choice char
	char c = { 'n' };

	if (c != 'n')
	{
		switch (c)
		{
		case 'i': // inventory
			//your itemCall for listup...
			inv.PlayerItemInventory();
			break;
		case 's': // skills
			skill();
			break;
		case 'h': // hack
			hack();
			break;
		case 'd': // defend
			defend();
			break;
		case 'a': // attack
			attack();
			break;
		default:
			normalOutput("Try using the single letter prompts..");
			turn();
			break;
		}
	}
}

//call in set status
// how many turns is your status eff or plus gonna last???
void battleSystem::statTurn(aegesa::statusEff turnsLastS)
{
	//Player_Actor he; //call vars
	//Enemy en; // call vars do another function for these guys
	//skillAction skilz;

	int maxNumber = 19;
	int max_Statuses = maxNumber;
	int b{};
	// statusCall <- here call an integer for these status effects
	// for this for loop use the interator to set how many turns for each individual status
	// and then count them down for each turn in another iterator.
	for (int i = b - 1; i < he.getParty_num(); i++)
	{
		b = he.callPartyMember(i).getStatus().turns_Of_aff;
		//put the statuses in here
		--b;
	}
	for (int i = 0; i < maxNumber; i++)
	{
		if (he.callPartyMember(i).My_Statuses[i].turns_Of_aff <= 0)
		{
			he.callPartyMember(i).My_Statuses[i].buffName.erase();
		}
	}
	
}

void battleSystem::turnSystem(int turnN)
{
//	Player_Actor he; //call vars
	//Enemy en; // call vars
	//skillAction skilz;

	bool guagek;
	guagek = aGuage;
	int turnBack;
	// a = no turn at the moment or turnA clash, b = enemy turn check, c = yor TUARN check, d = conflict turn for turn A clash
	// infinite turns till its over
	do
	{
		// turn switch checking whose turn it is
		switch (turnN)
		{
		case (a):
			// turn a is always at 0 if its at d which = 4...
			// CLASH this is why its called TURN A clash
			break;

		case (b):
			// enemy turn or ai turn check
			normalOutput("TURN # "+ turnN);
			enemyTurn();
			statTurn(he.getParty().getStatus());// call this whenever you get a SPECIFIC stat you want that is numbered
			break;

		case (c):
			// yor tuarn
			normalOutput("TURN # " + turnN);
			turn();
			statTurn(he.getParty().getStatus()); // one turn = one and done
			break;

		case (d):
			normalOutput("TURN # " + turnN);
			turn_A_mode();
			statTurn(he.getParty().getStatus()); // one turn = one and done
			break;

		case (e):
			// Turncheck
			turnBack = -4; // if nobodys turn

			break;

		case (f):
			// Turncheck
			turnBack = -5; // if nobodys turn
			break;

		default:
			aGuage = false; // reseting the turn check
			guagek = aGuage;
			break;
		}
	} while (battleTime == true);
}

int battleSystem::statusCall(int ti)
{
	return ti;
};

//turn guage
bool battleSystem::playerTGuage(int spdPlus, int spd, int fp)
{
	tm guage;
	guage.tm_sec = 0; // prototype timer or max?

	normalOutput("priming for attack....");
	long maxim = (fp + fp);

	long rate = (spd + spdPlus * (fp / 2));

	long dura = maxim;

	long add = 0;

	if (a)
	{
		auto start = std::chrono::high_resolution_clock::now;// start
		std::this_thread::sleep_for(static_cast<chrono::seconds>(dura));
		auto end = std::chrono::high_resolution_clock::now();

		add = 0;
		// push turn
		int push = 2;

		*aGuage = true;
		turnSystem(static_cast<t>(push));
		normalOutput("primed..!");
		guage.tm_sec = 0; // reset
		return aGuage;
	}
	else if (c) //player turn
	{
		normalOutput("Attacking...");
	}
	else
	{
		normalOutput("Guage Inactive...");
	}
	return false;
}

// this will also be the general ai turn guage since it doesn't really matter.
// if two party members have the same turn then I'll call unity attack the
// target will already be set since this is a single player game.
bool battleSystem::enemyTGuage(int spdPlus, int spd, int fp)
{
	tm guage;
	guage.tm_sec = 0; // prototype timer or max?

	normalOutput("Other priming attack....");

	long maxim = (fp + fp);

	long rate = (spd + spdPlus * (fp / 2));

	long dura = maxim;

	long add = 0;

	if (a)
	{
		auto start = std::chrono::high_resolution_clock::now;// start
		std::this_thread::sleep_for(static_cast<chrono::seconds>(dura));
		auto end = std::chrono::high_resolution_clock::now();

		add = 0;
		// push turn
		int push = 1;

		*aGuage = true;
		turnSystem(static_cast<t>(push));
		normalOutput("primed..!");
		guage.tm_sec = 0; // reset
		return aGuage;
	}

	else if (b) // enemy turn or ai
	{
		normalOutput("enemy guage inactive..");
	}
	else
	{
	}
	return false;
}

// normal output
void battleSystem::normalOutput(string ein)
{
	system("Color 0F");
	cout << ein << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

// damage output
void battleSystem::damageOutput(string bin)
{
	system("Color 0E");
	cout << bin << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

void battleSystem::critDmgOutput(string din)
{
	system("Color 0C");
	cout << din << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

// heal output
void battleSystem::healOutput(string hin)
{
	system("Color 0B");
	cout << hin << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

// an experiment?
void battleSystem::multiDamageOutput(string n[])
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// you can loop k higher to see more color choices
	for (int k = 1; k < 255; k++)
	{
		// pick the colorattribute k you want
		SetConsoleTextAttribute(hConsole, k);
		cout << k << n[k] << endl;
	}
	system("COLOR 07");
	cout << "Press Enter";
	cin.get();
}

void battleSystem::hackOutput(string n)
{
	system("Color 09");
	cout << n << endl;
	cout << "Press Enter";
	system("COLOR 07");
	cin.get();
}

// battle_system calls
void battleSystem::attack() 
{}

void battleSystem::defend()
{}

void battleSystem::skill()
{
	/*he.statPlus('h', skilz.skillcall->hpAdd);
	he.statPlus('s', skilz.skillcall->spAdd);
	he.statPlus('d', skilz.skillcall->defAdd);*/
}

void battleSystem::hack() {
	
	// get the enemy target
	targetEnemy();

	wstring window;

	// movement grid
	wstring grid[26][6]; 
	// one plus higher for
	//the actuall char amount in the order
	// grid array
	window += L"=== === ===";
	window += L"=== === ===";
	window += L"=== === ===";

	// snap to grid
	grid[25][5] = window;
	
	while (!VK_SPACE)
	{
		normalOutput("press space to fire when \n your marker (X) lands on (*) \n making a (#)");
		//system("CLS");

		// platforms 

		// 1 2 3
		// 4 5 6
		// 7 8 9

		// X< 1 = 0 1 2
		//	  2 = 3 4 5
		//	  3 = 6 7 8
		// 	  4 = 9 10 11
		//	  5 = 12 13 14
		//	  6 = 15 16 17
		//    7 = 18 19 20
		//	  8 = 21 22 23
		//	  9 = 24 25 26 >X


		wstring actorT, enemy, hitMarkA;
		actorT = L"X"; // XX
		enemy = L"*"; // **
		hitMarkA = L"#"; // ## mark empty when actorT overlays enemy

		// player startpoint
		int x, y;
		grid[0][1] = actorT;
		grid[1][1] = actorT;
		grid[2][1] = actorT;

		// enemy startpoint
		int ex, ey;
		grid[8][1] = enemy;
		grid[9][1] = enemy;
		grid[10][1] = enemy;

		// key console
#pragma region VirtualKey input
		switch (INPUT_KEYBOARD)
		{
		case VK_UP:
			//movement -y
#pragma region up
			// movement y
			if (y >= 0)
			{
				for (int i = 0; i < 2; i++)
				{
					x += 0;
					y -= 0;

					actorT = grid[x][y];
				}
			}
			else if (y <= 5)
			{
				for (int i = 0; i < 2; i++)
				{
					x += 0;
					y -= i;

					actorT = grid[x][y];
				}
			}
#pragma endregion
			if (actorT != grid[x][y]) //replacemet space
			{
				actorT[y + 1] = '='; // behind u
			}
			break;

		case VK_DOWN:
			// movement +y
#pragma region down
			if (y >= 5)
			{
				for (int i = 0; i < 2; i++)
				{
					x += 0;
					y += 0;

					actorT = grid[x][y];
				}
			}
			else if (y <= 0)
			{
				for (int i = 0; i < 2; i++)
				{
					x += 0;
					y += i;

					actorT = grid[x][y];
				}
			}
#pragma endregion
			if (actorT != grid[x][y]) //replacemet space
			{
				actorT[y - 1] = '=';
			}
			break;

		case VK_LEFT:
			// movement x-
			// validation
#pragma region left
			if (x <= 25)
			{
				for (int i = 0; i < 4; i++)
				{
					x -= i;
					y += 0;
					actorT = grid[x][y];
				}
			}
			else if (x >= 0)
			{
				for (int i = 0; i < 4; i++)
				{
					x += 0;
					y += 0;
					actorT = grid[x][y];
				}
			}

#pragma endregion
			if (actorT != grid[x][y]) //replacemet space
			{
				actorT[x + 1] = '=';
				actorT[x + 2] = '=';
				actorT[x + 3] = '=';
			}
			break;

		case VK_RIGHT:
			// movement x+
#pragma region right
			if (x >= 25)
			{
				for (int i = 0; i < 4; i++)
				{
					x += 0;
					y += 0;
					actorT = grid[x][y];
				}
			}
			else if (x <= 0)
			{
				for (int i = 0; i < 4; i++)
				{
					x += i;
					y += 0;
					actorT = grid[x][y];
				}
			}
#pragma endregion
			if (actorT != grid[x][y]) //replacemet space
			{
				actorT[x - 1] = '=';
				actorT[x - 2] = '=';
				actorT[x - 3] = '=';
			}
			break;

		default:
			break;
		}
#pragma endregion
		
#pragma region AI

		//--------- enemy movement ------------
		if (ex | ey == y | x)
		{
			enemy[ex - 1 | +1] | enemy[ey - 1 | +1];
		}

		// movement replacement
		//up
		if (enemy != grid[ex][ey]) //replacemet space
		{
			enemy[ey + 1] = '='; // behind u
		}
		//down 
		if (enemy != grid[ex][ey]) //replacemet space
		{
			enemy[ey - 1] = '=';
		}
		//left
		if (enemy != grid[ex][ey]) //replacemet space
		{
			enemy[ex + 1] = '=';
			enemy[ex + 2] = '=';
			enemy[ex + 3] = '=';
		}
		//right
		if (enemy != grid[ex][ey]) //replacemet space
		{
			enemy[ex - 1] = '=';
			enemy[ex - 2] = '=';
			enemy[ex - 3] = '=';
		}

		// ai move away from player 
		if (actorT[x] -1 >= enemy[ex] || actorT[x] - 1 <= enemy[ex])
		{
			// check if theres space and seek a way to escape
			// wait
			// move again
		}

		if (actorT[y] - 1 >= enemy[ey] || actorT[y] - 1 <= enemy[ey])
		{
			// check if theres space and seek a way to escape
			// wait
			// move again
		}
		
		// collision
		if (grid[x][y] == grid[ex][ey] && grid[ex] == grid[ey])
		{
			enemy = hitMarkA;
			actorT = hitMarkA;

			switch (VK_SPACE)
			{
				hackOutput("HIT");
				cin.get();
				hackOutput("HACKED!");
			default:
				break;
			}
		}
		else
		{
			enemy = enemy;
			actorT = actorT;

			switch (VK_SPACE)
			{
			default:
				break;
			}
		}
		/*
		  1  2  3  4  5  6
		  11 12 13 14 15 16
		  21 22 23 24 25 26
		 */
#pragma endregion

	}
}

void battleSystem::turn_A_mode()
{}

void battleSystem::enemyTurn()
{}

void battleSystem::rewardOutput()
{
	//Player_Actor he; //call vars
	//Enemy en; // call vars
	//inventory inv; // call tha listos

	// iterate all the enemies that were on
	// the battle field and run this at least
	// once for all of their rewards.
	// also store them in the player inventoru
	int rew = en.getItem();
	inv.rewardCall(rew);
	normalOutput(" Obtained...");

	//inv.my_items(inv.allitemList(en.getItem), en.getItem);
}
