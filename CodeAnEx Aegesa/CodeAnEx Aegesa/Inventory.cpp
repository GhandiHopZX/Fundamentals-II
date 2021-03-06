#include <iostream>
#include <string>
#include <map>
#include <stack>
#include "inventory.h"
#include "Player_Actor.h"
#include "Enemy.h"
#include "World.h"

// use tha multimap function
using namespace std;

//items

#pragma region All_items
inventory::item AEGESA_FRAGMENT;
inventory::item kaider_shard;
inventory::item greenball_bun;
inventory::item enchantment_crystal;
inventory::item music_chord;
inventory::item static_weave;
inventory::item marble_eye;
inventory::item tiny_fingers;
inventory::item chared_beast_skin;
inventory::item magical_mane;
inventory::item masters_cane;
inventory::item broken_wing;
inventory::item ripped_coat;
inventory::item shattered_broach;
#pragma endregion

inventory::item itemlist[100] =
{
	AEGESA_FRAGMENT,
	kaider_shard,
	greenball_bun,
	enchantment_crystal,
	music_chord,
	static_weave,
	marble_eye,
	tiny_fingers,
	chared_beast_skin,
	magical_mane,
	masters_cane,
	broken_wing,
	ripped_coat,
	shattered_broach,
};

inventory::item allitemList(int integer)
{
	return itemlist[integer];
}
//
//#pragma region All_armors
//	inventory::armor broad_armor;
//	inventory::armor kavelar_gear;
//	inventory::armor carbonite_gear;
//	inventory::armor crystalline_armor;
//	inventory::armor aerolite_gear;
//	inventory::armor vandham_armor;
//	inventory::armor antiImpact_armor;
//	inventory::armor katType_armor;
//	inventory::armor grenadier_composite_armor;
//	inventory::armor anti_nuclear_armor;
//#pragma endregion
//
//	inventory::armor armorlist[100] =
//	{
//		broad_armor,
//		kavelar_gear,
//		carbonite_gear,
//		crystalline_armor,
//		aerolite_gear,
//		vandham_armor,
//		antiImpact_armor,
//		katType_armor,
//		grenadier_composite_armor,
//		anti_nuclear_armor
//	};
//
//	inventory::armor allarmorList(int integer)
//	{
//		return armorlist[integer];
//	}

//weapon my_weapons[inventory::MAX_INTEGRITY] =
	//{};

	//armor my_armors[inventory::MAX_INTEGRITY] =
	//{};

inventory::item my_items[inventory::MAX_INTEGRITY] =
{};


inventory::inventory()
{
	headw = nullptr;
	heada = nullptr;
	headi = nullptr;
	size = 20;
	capacity = 100;
}

inventory::inventory(int)
{
}

inventory::inventory(const inventory&)
{
	capacity = MAX_INTEGRITY;
	headw = nullptr;
	heada = nullptr;
	headi = nullptr;
}

void inventory::push(int val)
{
}

void inventory::pop(int& a)
{
}

bool inventory::isFull() const
{
	return false;
}

bool inventory::isEmpty() const
{
	return false;
}

void inventory::appendNodeItem(item, int sitm)
{
	item* newNode;
	item* nodePtr;

	// allocation
	newNode = new item;
	newNode->ivalue = sitm; //value
	newNode->node = nullptr;

	if (!headi)
		headi = newNode;
	else
	{
		my_items[headi->ivalue].quantity += sitm;
		nodePtr = headi;
		while (nodePtr->node)
			nodePtr = nodePtr->node;
		nodePtr->node = newNode;
	}
}

void inventory::appendNodeWeapon(weapon, int w)
{
	weapon* newNode;
	weapon* nodePtr;

	// allocation
	newNode = new weapon;
	newNode->wvalue = w; //value
	newNode->next = nullptr;

	if (!headw)
		headw = newNode;
	else
	{
		nodePtr = headw;
		while (nodePtr->next)
			nodePtr = nodePtr->next;
		nodePtr->next = newNode;
	}
}

void inventory::appendNodeArmor(armor, int a)
{
	armor* newNode;
	armor* nodePtr;

	// allocation
	newNode = new armor;
	newNode->avalue = a; //value
	newNode->next = nullptr;

	if (!heada)
		heada = newNode;
	else
	{
		nodePtr = heada;
		while (nodePtr->next)
			nodePtr = nodePtr->next;
		nodePtr->next = newNode;
	}
}

void inventory::insertNodeItem(item, int i)
{
	item* newNode;
	item* nodePtr;
	item* previousItem = nullptr;

	newNode = new item;
	newNode->ivalue = i;

	if (!headi)
	{
		headi = newNode;
		newNode->node = nullptr;
	}

	else
	{
		nodePtr = headi;
		previousItem = nullptr;

		while (nodePtr != nullptr && nodePtr->ivalue < i)
		{
			previousItem = nodePtr;
			nodePtr = nodePtr->node;
		}

		if (previousItem == nullptr)
		{
			headi = newNode;
			newNode->node = nodePtr;
		}

		else
		{
			previousItem->node = newNode;
			newNode->node = nodePtr;
		}
	}
}

void inventory::insertNodeWeapon(weapon, int w)
{
	weapon* newNode;
	weapon* nodePtr;
	weapon* previousItem = nullptr;

	newNode = new weapon;
	newNode->wvalue = w;

	if (!headw)
	{
		headw = newNode;
		newNode->next = nullptr;
	}

	else
	{
		nodePtr = headw;
		previousItem = nullptr;

		while (nodePtr != nullptr && nodePtr->wvalue < w)
		{
			previousItem = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (previousItem == nullptr)
		{
			headw = newNode;
			newNode->next = nodePtr;
		}

		else
		{
			previousItem->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

void inventory::insertNodeArmor(armor, int a)
{
	armor* newNode;
	armor* nodePtr;
	armor* previousItem = nullptr;

	newNode = new armor;
	newNode->avalue = a;

	if (!heada)
	{
		heada = newNode;
		newNode->next = nullptr;
	}

	else
	{
		nodePtr = heada;
		previousItem = nullptr;

		while (nodePtr != nullptr && nodePtr->avalue < a)
		{
			previousItem = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (previousItem == nullptr)
		{
			heada = newNode;
			newNode->next = nodePtr;
		}

		else
		{
			previousItem->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

void inventory::deleteNodeItem(item, int i)
{
	item* nodePtr;
	item* previousNode = {};

	if (!headi)
	{
		return;
	}
	if (headi->ivalue == i)
	{
		nodePtr = headi->node;
		delete headi;
		headi = nodePtr;
	}
	else
	{
		nodePtr = headi;
		while (nodePtr != nullptr && nodePtr->ivalue != i)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->node;
		}
		if (nodePtr->quantity <= 0)
		{
			previousNode->node = nodePtr->node;
			delete nodePtr;
		}
	}
}

void inventory::deleteNodeWeapon(weapon, int w)
{
	weapon* nodePtr;
	weapon* previousNode = {};

	if (!headw)
	{
		return;
	}
	if (headw->wvalue == w)
	{
		nodePtr = headw->next;
		delete headw;
		headw = nodePtr;
	}
	else
	{
		nodePtr = headw;
		while (nodePtr != nullptr && nodePtr->wvalue != w)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr->quantity <= 0)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

void inventory::deleteNodeArmor(armor, int a)
{
	armor* nodePtr;
	armor* previousNode = {};

	if (!headi)
	{
		return;
	}
	if (headi->ivalue == a)
	{
		nodePtr = heada->next;
		delete heada;
		heada = nodePtr;
	}
	else
	{
		nodePtr = heada;
		while (nodePtr != nullptr && nodePtr->avalue != a)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr->quantity <= 0)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

void inventory::displaylistItem() const
{
	item* nodePtr;

	nodePtr = headi;

	while (nodePtr)
	{
		nodePtr->ivalue;
		cout << nodePtr->node << '\t' << '\t' << nodePtr->quantity << endl;
		nodePtr = nodePtr->node;
	}
}

void inventory::displaylistWeapon() const
{
	weapon* nodePtr;

	nodePtr = headw;

	while (nodePtr)
	{
		nodePtr->wvalue;
		cout << nodePtr->next << '\t' << '\t' << nodePtr->quantity << endl;
		nodePtr = nodePtr->next;
	}
}

void inventory::displaylistArmor() const
{
	armor* nodePtr;

	nodePtr = heada;

	while (nodePtr)
	{
		nodePtr->avalue;
		cout << nodePtr->next << '\t' << '\t' << nodePtr->quantity << endl;
		nodePtr = nodePtr->next;
	}
}

//void selectlistItem(int u, Player_Actor o)
//{
//	if (inventory::my_items <= 0)
//	{
//		string message = "No Items in index..";
//		cout << message;
//		my_items[0];
//	}
//	else
//	{
//		cout << "use Item?";
//		itemUse(u, o);
//	}
//	remItem(my_items[u].quantity);
//	//return my_items[u];
//}

//void inventory::itemUse(int d, Player_Actor o)
//{
//	// add stuff here
//	o.AGId += my_items[d].agiAdd;
//	o.ap += my_items[d].apAdd;
//	o.ATKd += my_items[d].atkAdd;
//	o.CONd += my_items[d].conAdd;
//	o.DEFd += my_items[d].defAdd;
//	o.DEXd += my_items[d].dexAdd;
//	o.ENDd += my_items[d].endAdd;
//	o.fpd += my_items[d].fpAdd;
//	 // use the gold value for gold items += my_items[d].goldValue;
//	o.AGId += my_items[d].hpAdd;
//	o.AGId += my_items[d].intAdd;
//	o.AGId += my_items[d].spAdd;
//	o.AGId += my_items[d].spdAdd;
//	o.AGId += my_items[d].sprAdd;
//	o.AGId += my_items[d].strAdd;
//
//	// name call
//	cout << my_items[d].name << "used" << endl;
//}

//
//void inventory::armorSell(int d, Player_Actor o)
//{
//
//	// name call
//}

//void inventory::selectlistArmor(int u, Player_Actor o)
//{
//	if (my_armors <= 0)
//	{
//		string message = "No Armors in index..";
//		cout << message;
//		my_armors[0];
//	}
//	//remItem(my_armors[u].quantity);
//	//return my_armors[u];
//}

//void inventory::selectlistWeapon(int u, Player_Actor i)
//{
//	if (my_weapons <= 0)
//	{
//		string message = "No Armors in index..";
//		cout << message;
//		my_weapons[0];
//	}
//	remItem(my_weapons[u].quantity);
//
//	//return my_weapons[u];
//}

void inventory::itemCall(int i)
{

} // for item usage

// for combat
//void inventory::PlayerItemInventory(Player_Actor o) // gotta make an inventory that'll work in the world menu
//{
//	system("CLS");
//	// show choices'
//	cout << "What menu would you like to select..?" << endl;
//	cout << "Items(i), Armors(a), Weapons(w), Equipped(e), Quit(q)" << endl;
//	char choice = {};
//	int i = 0;
//	switch (choice)
//	{
//	case 'i':
//		cout << "Select an Item? or Exit? (Q,q): use an number to select one.. 0 - " + sum_items << endl;
//		displaylistItem();
//		// select an item? using a #
//		cout << "select an item? using a #" << endl;
//		//int i = 0;
//		choice = 'N';
//		cin >> i;
//		selectlistItem(i, o); // usage
//		if (isalpha(i))
//		{
//			cout << "invalid option" << endl;
//			PlayerItemInventory(o);
//			break;
//		}
//		cout << "Make another selection?" << endl;
//		PlayerItemInventory(o);
//		break;
//
//	case 'a':
//		cout << "Select an Armor?: use an number to select one.. 0 - " + sum_armors << endl;
//		displaylistArmor();
//		// select an armor? using a #
//		cout << "select an armor? using a #" << endl;
//		//int i = 0;
//		choice = 'N';
//		cin >> i;
//		//selectlistArmor(i,o);
//		//equip armor
//		if (isalpha(i))
//		{
//			cout << "invalid option" << endl;
//			PlayerItemInventory(o);
//			break;
//		}
//		cout << "Make another selection?" << endl;
//		PlayerItemInventory(o);
//		break;
//
//	case 'w':
//		cout << "Select an Weapon?: use an number to select one.. 0 - " + inventory::sum_weapons << endl;
//		displaylistWeapon();
//		cout << "select an weapon? using a #" << endl;
//
//		choice = 'N';
//		cin >> i;
//		selectlistWeapon(i,o);
//		//equip armor
//		if (isalpha(i))
//		{
//			cout << "invalid option" << endl;
//			PlayerItemInventory(o);
//			break;
//		}
//		cout << "Make another selection?" << endl;
//		PlayerItemInventory(o);
//		break;
//
//	case 'e':
//		cout << "Weapons equipped: select one for overview.. 0 - " + sum_weapons << endl;
//		cout << "Armors equipped: select one for overview.. 0 - " + sum_armors << endl;
//		//displaylistEQWgear();
//		cout << endl;
//		//displaylistEQAgear();
//		cout << endl;
//		cout << "select a gear? using a #" << endl;
//		//int i = 0;
//		choice = 'N';
//		cin >> i;
//
//		//selectlistWeapon(i);
//		//equip armor
//		if (isalpha(i))
//		{
//			cout << "invalid option" << endl;
//			PlayerItemInventory(o);
//			break;
//		}
//		cout << "Make another selection?" << endl;
//		PlayerItemInventory(o);
//		break;
//
//	case 'q':
//		break;
//
//	default:
//		break;
//	}
//}

//
//void inventory::setWeapon(Player_Actor o, inventory::weapon weapon, int index)
//{
//	//o.mActorWeaponE[index] = weapon;
//}
//
//void inventory::setArmor(Player_Actor o, inventory::armor gear, int index)
//{
//	//o.mActorArmorE[index] = gear;
//}

//inventory inventory::armor getMyArmors(int index)
//{
//	return ActorArmorE[index];
//}
//
//inventory inventory::weapon getMyWeapons(int index)
//{
//	return ActorWeaponE[index];
//}

void inventory::rewardCall(int index)
{
	cout << itemlist[index].name << endl;
	addItem(itemlist[index].quantity);
	//return allitemList(index);
}


//
//void inventory::weaponCall(int index)
//{
//	cout << weaponlist[index].name << endl;
//	addItem(weaponlist[index].quantity);
//	//return allweaponList(index);
//}

void inventory::addItem(int find) {
	int i = 1;
	item b;
	for (size_t g = 0; g < MAX_INTEGRITY; g++)
	{
		b = itemlist[find];
	}
	if (b.ivalue != my_items[find].ivalue)
	{
		insertNodeItem(allitemList(find), i);
	}
	appendNodeItem(allitemList(find), i); // calls the index and adds 1
	
} //adding to the struct array

void inventory::remItem(int find) {
	int i = 1;
	my_items[find].quantity -= i; // calls the index and adds 1
	deleteNodeItem(my_items[find], i);
} //removing to the struct array

inventory::~inventory()
{
	armor* nodeAPtr;
	armor* nextANode;
	item* nodeIPtr;
	item* nextINode;
	weapon* nodeWPtr;
	weapon* nextWNode;

	nodeAPtr = heada;
	nodeIPtr = headi;
	nodeWPtr = headw;

	while (nodeAPtr != nullptr)
	{
		nextANode = nodeAPtr->next;
		delete nodeAPtr;
		nodeAPtr = nextANode;
	}

	while (nodeIPtr != nullptr)
	{
		nextINode = nodeIPtr->node;
		delete nodeIPtr;
		nodeIPtr = nextINode;
	}

	while (nodeWPtr != nullptr)
	{
		nextWNode = nodeWPtr->next;
		delete nodeWPtr;
		nodeWPtr = nextWNode;
	}

	//delete [] stackArray;
}