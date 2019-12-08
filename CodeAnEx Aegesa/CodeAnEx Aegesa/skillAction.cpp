#include <iostream>
#include "skillAction.h"

//default
skillAction::skillAction()
{
	name = "";
	dec = "";
}

//calling the skill into existance
skillAction::skillAction(int call)
{
	// using cout for the sake of simplicity 
	// because normalOutput is for the battleSystem.
	cout << skillcall(call).name << endl;
	skillcall(call).dec;
	displayElementType();
	getElementType();
	cout << skillcall(call).num + '\n' +
		 skillcall(call).hpAdd + '\n' +
		 skillcall(call).spAdd + '\n' +
		 skillcall(call).dpAdd + '\n' +
		 skillcall(call).fpAdd + '\n' +
		 skillcall(call).apAdd + '\n' +

		 skillcall(call).atkAdd + '\n' +
		 skillcall(call).defAdd + '\n' +
		 skillcall(call).spdAdd + '\n' +

		 skillcall(call).agiAdd + '\n' +
		 skillcall(call).conAdd + '\n' +
		 skillcall(call).dexAdd + '\n' +
		 skillcall(call).endAdd + '\n' +
		 skillcall(call).strAdd + '\n' +
		 skillcall(call).intAdd + '\n' +
		 skillcall(call).sprAdd + '\n'
	<< endl;
}

skillAction::skillAction(int num, string name, elementType, string dec)
{
	
}

skillAction skillAction::skillcall(int p)
{
#pragma region Skillist
	skillAction FireWeave(0, "FireWeave", skillAction::elementType::Fire, "AN AOE ATTACK THAT ENGULFS ALL ENEMIES.");
	skillAction WaterFlash(1, "WaterFlash", skillAction::elementType::Water, "");
#pragma endregion

	skillAction allSkills[50] =
	{
		FireWeave,
		WaterFlash
	};
	return allSkills[p];
}

skillAction::elementType skillAction::getElementType()
{
	switch (elementType::Water)
	{
	case skillAction::elementType::Water:
		return elementType::Water;
		break;
	case skillAction::elementType::Fire:
		break;
	case skillAction::elementType::Earth:
		break;
	case skillAction::elementType::Air:
		break;
	case skillAction::elementType::Lightning:
		break;
	case skillAction::elementType::Phase:
		break;
	case skillAction::elementType::Bio:
		break;
	case skillAction::elementType::Light:
		break;
	case skillAction::elementType::Dark:
		break;
	case skillAction::elementType::Normal:
		break;
	default:
		break;
	}
	return elementType::Water;
}

skillAction::elementType skillAction::setElementType(int m)
{
	return static_cast<elementType>(m);
}

void skillAction::displayElementType()
{
	switch (elementType::Water)
	{
	case skillAction::elementType::Water:
		cout << "Water" << endl;
		break;
	case skillAction::elementType::Fire:
		cout << "Fire" << endl;
		break;
	case skillAction::elementType::Earth:
		cout << "Earth" << endl;
		break;
	case skillAction::elementType::Air:
		cout << "Air" << endl;
		break;
	case skillAction::elementType::Lightning:
		cout << "Lightning" << endl;
		break;
	case skillAction::elementType::Phase:
		cout << "Phase" << endl;
		break;
	case skillAction::elementType::Bio:
		cout << "Bio" << endl;
		break;
	case skillAction::elementType::Light:
		cout << "Light" << endl;
		break;
	case skillAction::elementType::Dark:
		cout << "Dark" << endl;
		break;
	case skillAction::elementType::Normal:
		cout << "Normal" << endl;
		break;
	default:
		break;
	}
}

void skillAction::getDescription()
{
}

