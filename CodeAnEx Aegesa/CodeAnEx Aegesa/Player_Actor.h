#pragma once
#include <string>
#include <list>
#include <vector>
#include <stack>
#include <thread>
#include "battleSystem.h"
#include "inventory.h"
#include "skillAction.h"

using namespace std;

class Player_Actor
{
private:
	
	// variables

#pragma region vars

	// statbase
	unsigned int hp = 0; // health
	unsigned int sp = 0; // special
	unsigned int fp = 0; // fighter (aural)
	unsigned int ap = 0; // abiliy (optained after every level) (you'll also obtain -ap- from special items, Bosses and TurnA clashes)
	unsigned int dp = 0; // dynamic points (obtained after a Turn A clash for leveling)

	// battler statbase <- ap goes here
	unsigned int ATK = 0; // attack
	unsigned int DEF = 0; // defence (armor based)
	unsigned int SPD = 0; // speed

	// ability stats <- dp goes here
	unsigned int AGI = 0; // agility
	unsigned int DEX = 0; // dexterity
	unsigned int INT = 0; // intelligence
	unsigned int SPR = 0; // spirit
	unsigned int STR = 0; // strength (also effects status)
	unsigned int END = 0; // endurance (bodily based / also effects status)
	unsigned int CON = 0; // constitution (mental, body, soul, based / also effects status)

	// experience
	unsigned int EXP; // experience to obtain the per level ap gain

#pragma endregion

public:

	// variables
	string name; // YOUR NAME!
	string bio; // YOUR STORY!

	// stat multiplier flag
	bool statmulti;
	int dummyPlus;

	// stuff
	
	// weapons and armor
	
	struct statusEff
	{
		string buffName;
		int turns_Of_aff = 0;
		// afflictions statbase
		unsigned int hp = 0; // health
		unsigned int sp = 0; // special
		unsigned int fp = 0; // fighter (aural)

		// battler statbase <- ap goes here
		unsigned int ATK = 0; // attack
		unsigned int DEF = 0; // defence (armor based)
		unsigned int SPD = 0; // speed

		// ability stats <- dp goes here
		unsigned int AGI = 0; // agility
		unsigned int DEX = 0; // dexterity
		unsigned int INT = 0; // intelligence
		unsigned int SPR = 0; // spirit
		unsigned int STR = 0; // strength (also effects status)
		unsigned int END = 0; // endurance (bodily based / also effects status)
		unsigned int CON = 0; // constitution (mental, body, soul, based / also effects status)
	};

	statusEff allEffGet[20] = {}; // wip

	// Constructors
	Player_Actor();

	// getters / accessors
	string normalOutput(string normal)
	{
		return normal;
	};

#pragma region getters

	//Hp Getter
	int getHp()
	{
		return hp;
	};

	//Sp Getter
	int getSp()
	{
		return sp;
	};

	//Fp Getter
	int getFp()
	{
		return fp;
	};

	//Ap Getter
	int getAp()
	{
		return ap;
	};

	//Dp Getter
	int getDp()
	{
		return dp;
	};

	//atk Getter
	int getATK()
	{
		return ATK;
	};

	//def Getter
	int getDEF()
	{
		return DEF;
	};

	//spd Getter
	int getSPD()
	{
		return SPD;
	};

	//agi Getter
	int getAGI()
	{
		return AGI;
	};

	//dex Getter
	int getDEX()
	{
		return DEX;
	};

	//int Getter
	int getINT()
	{
		return INT;
	};

	//spr Getter
	int getSPR()
	{
		return SPR;
	};

	//str Getter
	int getSTR()
	{
		return STR;
	};

	//end Getter
	int getEND()
	{
		return END;
	};

	//con Getter
	int getCON()
	{
		return CON;
	};

	//get Status
	statusEff getStatus(int);

	//exp Getter
	int getExp()
	{
		return EXP;
	};

	
#pragma endregion

	// setters / mutators

#pragma region setters

	void setHp(int hpin)
	{
		hp = hpin;
	}

	void setSp(int spin)
	{
		sp = spin;
	}

	void setFp(int fpin)
	{
		fp = fpin;
	}

	void setAp(int apin)
	{
		ap = apin;
	}

	void setDp(int dpin)
	{
		dp = dpin;
	}


	void setATK(int atin)
	{
		ATK = atin;
	}

	void setDEF(int dein)
	{
		DEF = dein;
	}

	void setSPD(int sdin)
	{
		SPD = sdin;
	}


	void setSTR(int stin)
	{
		STR = stin;
	}

	void setAGI(int agin)
	{
		AGI = agin;
	}

	void setEND(int send)
	{
		END = send;
	}

	void setCON(int coin)
	{
		CON = coin;
	}

	void setDEX(int dexin)
	{
		DEX = dexin;
	}

	void setINT(int intIn)
	{
		INT = intIn;
	}

	void setSPR(int sprIn)
	{
		SPR = sprIn;
	}

	void setEXP(int expin, int plus)
	{
		//int eDrain = plus;

		if (statmulti == true)
		{
			EXP = expin + plus;
		}
		else
		{
			cout << "EXP multiplier gain has faded." << endl;
			EXP = expin;
			//EXP -= eDrain;
		}
	}

	void statPlus(char stat, int plus)
	{
		int* eDrain = new int;

		switch (stat)
		{
		case 'h':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cHp = getHp();
				cHp += plus;
				setHp(cHp);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				//battleSystem b;
				cout << "HP plus modifier has faded" << endl;
				
				int dHp = getHp();
				dHp = dHp - *eDrain;
				setHp(dHp);
				delete eDrain;
			}
			break;
		case 's':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cSp = getSp();
				cSp += plus;
				setSp(cSp);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "SP plus modifier has faded" << endl;
				int dSp = getSp();
				dSp = dSp - *eDrain;
				setSp(dSp);
				delete eDrain;
			}
			break;
		case 'f':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cFp = getFp();
				cFp += plus;
				setFp(cFp);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "FP plus modifier has faded" << endl;

				int dFp = getFp();
				dFp = dFp - *eDrain;
				setFp(dFp);
				delete eDrain;
			}
			break;
		case 'a':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cAp = getAp();
				cAp += plus;
				setSp(cAp);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "AP plus modifier has faded" << endl;

				int dAp = getAp();
				dAp = dAp - *eDrain;
				setHp(dAp);
				delete eDrain;
			}
			break;
		case 'd':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cDp = getDp();
				cDp += plus;
				setDp(cDp);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "DP plus modifier has faded" << endl;

				int dDp = getDp();
				dDp = dDp - *eDrain;
				setDp(dDp);
				delete eDrain;
			}
			break;
		case 'str':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cStr = getSTR();
				cStr += plus;
				setSTR(cStr);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "STR plus modifier has faded" << endl;

				int dStr = getSTR();
				dStr = dStr - *eDrain;
				setSTR(dStr);
				delete eDrain;
			}
			break;
		case 'atk':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cAtk = getATK();
				cAtk += plus;
				setATK(cAtk);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "ATK plus modifier has faded" << endl;

				int dAtk = getATK();
				dAtk = dAtk - *eDrain;
				setATK(dAtk);
				delete eDrain;
			}
			break;
		case 'def':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cDef = getDEF();
				cDef += plus;
				setDEF(cDef);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "DEF plus modifier has faded" << endl;

				int dDef = getDEF();
				dDef = dDef - *eDrain;
				setDEF(dDef);
				delete eDrain;
			}
			break;
		case 'agi':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cAgi = getAGI();
				cAgi += plus;
				setSp(cAgi);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "AGI plus modifier has faded" << endl;

				int dAgi = getAGI();
				dAgi = dAgi - *eDrain;
				setAGI(dAgi);
				delete eDrain;
			}
			break;
		case 'spd':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cSpd = getSPD();
				cSpd += plus;
				setSp(cSpd);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "SPD plus modifier has faded" << endl;

				int dSpd = getSPD();
				dSpd = dSpd - *eDrain;
				setSPD(dSpd);
				delete eDrain;
			}
			break;
		case 'end':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cEnd = getEND();
				cEnd += plus;
				setEND(cEnd);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "END plus modifier has faded" << endl;

				int dEnd = getEND();
				dEnd = dEnd - *eDrain;
				setEND(dEnd);
				delete eDrain;
			}
			break;
		case 'con':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cCon = getCON();
				cCon += plus;
				setCON(cCon);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "CON plus modifier has faded" << endl;

				int dCon = getCON();
				dCon = dCon - *eDrain;
				setCON(dCon);
				delete eDrain;
			}
			break;
		case 'int':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cInt = getINT();
				cInt += plus;
				setINT(cInt);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "INT plus modifier has faded" << endl;

				int cInt = getINT();
				cInt = cInt - *eDrain;
				setINT(cInt);
				delete eDrain;
			}
			break;
		case 'spr':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cSpr = getSPR();
				cSpr += plus;
				setSPR(cSpr);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "SPR plus modifier has faded" << endl;

				int dSpr = getSPR();
				dSpr = dSpr - *eDrain;
				setSPR(dSpr);
				delete eDrain;
			}
			break;
		case 'dex':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cDex = getDEX();
				cDex += plus;
				setDEX(cDex);
				delete eDrain;
			}
			else if (statmulti == false)
			{
				cout << "DEX plus modifier has faded" << endl;

				int cDex = getDEX();
				cDex = cDex - *eDrain;
				setDEX(cDex);
				delete eDrain;
			}
			break;
		default:
			break;
		}
	}

	

#pragma endregion

	void setStatus(Player_Actor::statusEff statusName[]);

	void battleGuage();

	// Deconstructor
	~Player_Actor();
};