#include "skillAction.h"

//default
skillAction::skillAction()
{

}

//calling the skill into existance
skillAction::skillAction(int call)
{
	skillcall(call).name;
	skillcall(call).num;
	skillcall(call).type;
	skillcall(call).hpAdd;
	skillcall(call).spAdd;
	skillcall(call).dpAdd;
	skillcall(call).fpAdd;
	skillcall(call).apAdd;

	skillcall(call).atkAdd;
	skillcall(call).defAdd;
	skillcall(call).spdAdd;

	skillcall(call).agiAdd;
	skillcall(call).conAdd;
	skillcall(call).dexAdd;
	skillcall(call).endAdd;
	skillcall(call).strAdd;
	skillcall(call).intAdd;
	skillcall(call).sprAdd;
}

skillAction::skillAction(int num, string name, elementType)
{
	
}

skillAction skillAction::skillcall(int)
{
#pragma region Skillist
	skillAction FireWeave(0, "FireWeave", skillAction::elementType::Fire);
	skillAction WaterFlash(1, "WaterFlash", skillAction::elementType::Water);
#pragma endregion

	skillAction allSkills[50] =
	{
		FireWeave,

	};
	return ;
}
