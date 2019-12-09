#pragma once
//this is a dummy class for enemy
class aegesa
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

	// getters

	// functions 

};

