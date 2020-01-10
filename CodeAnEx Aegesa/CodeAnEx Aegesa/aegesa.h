#pragma once
#include <iostream>
#include <string>
#include "aegesa.h"

using namespace std;
//this is a dummy class for enemy
class aegesa
{
public:
	aegesa();

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

	//deductables
	int hpd = 0; // health
	int spd = 0; // special
	int fpd = 0; // fighter (aural)

	int ATKd = 0; // attack
	int DEFd = 0; // defence (armor based)
	int SPDd = 0; // speed

	int AGId = 0; // agility
	int DEXd = 0; // dexterity
	int INTd = 0; // intelligence
	int SPRd = 0; // spirit
	int STRd = 0; // strength (also effects status)
	int ENDd = 0; // endurance (bodily based / also effects status)
	int CONd = 0; // constitution (mental, body, soul, based / also effects status)

	// experience
	unsigned int EXP; // experience to obtain the per level ap gain

#pragma endregion

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

#pragma region statusTypes
	aegesa::statusEff REGENERATION;
	aegesa::statusEff POISON;
	aegesa::statusEff STUNED;
	aegesa::statusEff DEAD;
	aegesa::statusEff HACKED;
	aegesa::statusEff CRIPPLE;
	aegesa::statusEff INEBREATED;
	aegesa::statusEff SLEEP;
	aegesa::statusEff CURSEDVSDARK; // AGONY
	aegesa::statusEff CURSRDVSLIGHT; // DEPRESSION
	aegesa::statusEff CURSEDVSDEMONIC; // ACCURSED
	aegesa::statusEff CURSED; 
	aegesa::statusEff ANGER; // ADRENELINE
#pragma endregion

	aegesa::statusEff allEffGet[20] = {
		REGENERATION,
		POISON,
		STUNED,
		DEAD,
		HACKED,
		CRIPPLE,
		INEBREATED,
		SLEEP,
		CURSEDVSDARK,
		CURSRDVSLIGHT,
		CURSEDVSDEMONIC,
		CURSED,
		ANGER 
	}; // wip

	statusEff My_Statuses[20]
	{
	};

	// variables
	string name = ""; // YOUR NAME!
	string bio = ""; // YOUR STORY!

	// stat multiplier flag
	bool statmulti;
	int dummyPlus;

	enum class elementType
	{
		Water = 0,
		Fire = 1,
		Earth = 2,
		Air = 3,
		Lightning = 4,
		Phase = 5,
		Bio = 6,
		Light = 7,
		Dark = 8,
		Normal = 9
	};

#pragma region getters
	string getName()
	{
		return name;
	};

	bool getSMulti()
	{
		return statmulti;
	}

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
	statusEff getStatus();

	//exp Getter
	int getExp()
	{
		return EXP;
	};

#pragma endregion

	// setters / mutators

#pragma region setters

	void setName(string x)
	{
		name = x;
	}

	void statMSet(bool d)
	{
		statmulti = d;
	}

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

	void statPlus(char stat, int plus);

	

#pragma endregion

	// down couts

#pragma region getters
	//Hp Getter
	int getHpd()
	{
		return hpd;
	};

	//Sp Getter
	int getSpd()
	{
		return spd;
	};

	//Fp Getter
	int getFpd()
	{
		return fpd;
	};

	//atk Getter
	int getATKd()
	{
		return ATKd;
	};

	//def Getter
	int getDEFd()
	{
		return DEFd;
	};

	//spd Getter
	int getSPDd()
	{
		return SPDd;
	};

	//agi Getter
	int getAGId()
	{
		return AGId;
	};

	//dex Getter
	int getDEXd()
	{
		return DEXd;
	};

	//int Getter
	int getINTd()
	{
		return INTd;
	};

	//spr Getter
	int getSPRd()
	{
		return SPRd;
	};

	//str Getter
	int getSTRd()
	{
		return STRd;
	};

	//end Getter
	int getENDd()
	{
		return ENDd;
	};

	//con Getter
	int getCONd()
	{
		return CONd;
	};

#pragma endregion

#pragma region setters

	void setHpd(int hpin)
	{
		hpd = hpin;
	}

	void setSpd(int spin)
	{
		spd = spin;
	}

	void setFpd(int fpin)
	{
		fpd = fpin;
	}

	void setATKd(int atin)
	{
		ATKd = atin;
	}

	void setDEFd(int dein)
	{
		DEFd = dein;
	}

	void setSPDd(int sdin)
	{
		SPDd = sdin;
	}

	void setSTRd(int stin)
	{
		STRd = stin;
	}

	void setAGId(int agin)
	{
		AGId = agin;
	}

	void setENDd(int send)
	{
		ENDd = send;
	}

	void setCONd(int coin)
	{
		CONd = coin;
	}

	void setDEXd(int dexin)
	{
		DEXd = dexin;
	}

	void setINTd(int intIn)
	{
		INTd = intIn;
	}

	void setSPRd(int sprIn)
	{
		SPRd = sprIn;
	}


#pragma endregion

	//// functions
	void setStatus(statusEff statusName[]);
	void battleGuage();
	string normalOutput(string normal)
	{
		return normal;
	};

	~aegesa();
};
