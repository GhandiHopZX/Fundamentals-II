#pragma once
class Player_Actor
{
private:

	// variables
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

	int EXP; // experience to obtain the per level ap gain

public:
	// variables

	Player_Actor();






	//~Player_Actor();
};