#pragma once
#include <string>
#include <list>
#include <vector>
#include <stack>
#include <thread>
#include "battleSystem.h"
#include "inventory.h"

using namespace std;

class Player_Actor
{
private:

	// variables
#pragma region vars

	// statbase
	unsigned int hp; // health
	unsigned int sp; // special
	unsigned int fp; // fighter (aural)
	unsigned int ap; // abiliy (optained after every level) (you'll also obtain -ap- from special items, Bosses and TurnA clashes)
	unsigned int dp; // dynamic points (obtained after a Turn A clash for leveling)

	// battler statbase <- ap goes here
	unsigned int ATK; // attack
	unsigned int DEF; // defence (armor based) 
	unsigned int SPD; // speed

	// ability stats <- dp goes here
	unsigned int AGI; // agility
	unsigned int DEX; // dexterity
	unsigned int INT; // intelligence
	unsigned int SPR; // spirit
	unsigned int STR; // strength (also effects status)
	unsigned int END; // endurance (bodily based / also effects status)
	unsigned int CON; // constitution (mental, body, soul, based / also effects status)

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
	
	struct statusEff
	{
		string buffName;
		int turns_Of_aff = 0;
		// afflictions statbase
		unsigned int hp; // health
		unsigned int sp; // special
		unsigned int fp; // fighter (aural)

		// battler statbase <- ap goes here
		unsigned int ATK; // attack
		unsigned int DEF; // defence (armor based) 
		unsigned int SPD; // speed

		// ability stats <- dp goes here
		unsigned int AGI; // agility
		unsigned int DEX; // dexterity
		unsigned int INT; // intelligence
		unsigned int SPR; // spirit
		unsigned int STR; // strength (also effects status)
		unsigned int END; // endurance (bodily based / also effects status)
		unsigned int CON; // constitution (mental, body, soul, based / also effects status)
	};

	statusEff allEffGet[20] = {}; // wip

	// Constructors
	Player_Actor();

	// getters / accessors

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
	void getStatus();

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

	void setSTR(int stin)
	{
		STR = stin;
	}

	void setATK(int atin)
	{
		ATK = atin;
	}

	void setDEF(int dein)
	{
		DEF = dein;
	}

	void setAGI(int agin)
	{
		AGI = agin;
	}

	void setSPD(int sdin)
	{
		SPD = sdin;
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
			battleSystem b;
			b.normalOutput("EXP multiplier gain has faded.");
			EXP = expin;
			//EXP -= eDrain;
		}
	}

	void statPlus(char stat, int plus)
	{
		int *eDrain = new int;

		switch (stat)
		{
		case 'h':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cHp = getHp();
				cHp += plus;
				setHp(cHp);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("HP plus modifier has faded");

				int dHp = getHp();
				dHp = dHp - *eDrain;
				setHp(dHp);
			}
			break;
		case 's':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cSp = getSp();
				cSp += plus;
				setSp(cSp);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("SP plus modifier has faded");

				int dSp = getSp();
				dSp = dSp - *eDrain;
				setSp(dSp);
			}
			break;
		case 'f':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cFp = getFp();
				cFp += plus;
				setFp(cFp);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("FP plus modifier has faded");

				int dFp = getFp();
				dFp = dFp - *eDrain;
				setFp(dFp);
			}
			break;
		case 'a':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cAp = getAp();
				cAp += plus;
				setSp(cAp);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("AP plus modifier has faded");

				int dAp = getAp();
				dAp = dAp - *eDrain;
				setHp(dAp);
			}
			break;
		case 'd':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cDp = getDp();
				cDp += plus;
				setDp(cDp);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("DP plus modifier has faded");

				int dDp = getDp();
				dDp = dDp - *eDrain;
				setDp(dDp);
			}
			break;
		case 'str':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cStr = getSTR();
				cStr += plus;
				setSTR(cStr);
			}
			else if(statmulti == false)
			{
				battleSystem b;
				b.normalOutput("STR plus modifier has faded");

				int dStr = getSTR();
				dStr = dStr - *eDrain;
				setSTR(dStr);
			}
			break;
		case 'atk':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cAtk = getATK();
				cAtk += plus;
				setATK(cAtk);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("ATK plus modifier has faded");

				int dAtk = getATK();
				dAtk = dAtk - *eDrain;
				setATK(dAtk);
			}
			break;
		case 'def':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cDef = getDEF();
				cDef += plus;
				setDEF(cDef);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("DEF plus modifier has faded");

				int dDef = getDEF();
				dDef = dDef - *eDrain;
				setDEF(dDef);
			}
			break;
		case 'agi':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cAgi = getAGI();
				cAgi += plus;
				setSp(cAgi);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("AGI plus modifier has faded");

				int dAgi = getAGI();
				dAgi = dAgi - *eDrain;
				setAGI(dAgi);
			}
			break;
		case 'spd':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cSpd = getSPD();
				cSpd += plus;
				setSp(cSpd);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("SPD plus modifier has faded");

				int dSpd = getSPD();
				dSpd = dSpd - *eDrain;
				setSPD(dSpd);
			}
			break;
		case 'end':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cEnd = getEND();
				cEnd += plus;
				setEND(cEnd);
			}
			else if (statmulti == false)
			{
				battleSystem b;
				b.normalOutput("END plus modifier has faded");

				int dEnd = getEND();
				dEnd = dEnd - *eDrain;
				setEND(dEnd);
			}
			break;
		case 'con':
			*eDrain = plus;
			if (statmulti == true)
			{
				int cCon = getCON();
				cCon += plus;
				setCON(cCon);
			}
			else if(statmulti == false)
			{
				battleSystem b;
				b.normalOutput("CON plus modifier has faded");

				int dCon = getCON();
				dCon = dCon - *eDrain;
				setHp(dCon);
			}
			break;
		default:
			break;
		}
	}


#pragma endregion

	void battleGuage();

	// Deconstructor
	~Player_Actor();
};