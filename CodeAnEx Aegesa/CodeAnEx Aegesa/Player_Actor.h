#pragma once
#include <string>

using namespace std;

class Player_Actor
{
private:

	// variables
#pragma region vars

	// statbase
	int hp; // health
	int sp; // special
	int fp; // fighter (aural)
	int ap; // abiliy (optained after every level) (you'll also obtain -ap- from special items, Bosses and TurnA clashes)
	int dp; // dynamic points (obtained after a Turn A clash for leveling)

	// battler statbase <- ap goes here
	int ATK; // attack
	int DEF; // defence (armor based) 
	int SPD; // speed

	// ability stats <- dp goes here
	int AGI; // agility
	int DEX; // dexterity
	int INT; // intelligence
	int SPR; // spirit
	int STR; // strength (also effects status)
	int END; // endurance (bodily based / also effects status)
	int CON; // constitution (mental, body, soul, based / also effects status)

	// experience
	int EXP; // experience to obtain the per level ap gain
#pragma endregion
	

public:
	// variables
	string name; // YOUR NAME!
	string bio; // YOUR STORY!

	// stuff
	
	string *Status = new string; // a new status
	string statusEff[20] = {};

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
	string getStatus();

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

	void setEXP(int expin)
	{
		EXP = expin;
	}
#pragma endregion
	void setStatus(string statusName[]);
	// Deconstructor
	//~Player_Actor();
};