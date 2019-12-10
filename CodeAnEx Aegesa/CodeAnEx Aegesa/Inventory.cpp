#include <iostream>
#include <string>
#include <map>
#include <stack>
#include "inventory.h"
#include "Player_Actor.h"
#include "Enemy.h"
#include "World.h"
#include "skillAction.h"
// use tha multimap function

using namespace std;

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
//
//inventory::inventory(int wIndex, weapon w)
//{
//	
//	headw = nullptr;
//}
//
//inventory::inventory(int aIndex, armor a)
//{
//	heada = nullptr;
//}
//
//inventory::inventory(int iIndex, item i)
//{
//	headi = nullptr;
//}

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

void inventory::selectlistItem(int u)
{
	if (my_items <= 0)
	{
		string message = "No Items in index..";
		cout << message;
		my_items[0];
	}
	remItem(my_items[u].quantity);
	//return my_items[u];
}

void inventory::selectlistArmor(int u)
{
	if (my_armors <= 0)
	{
		string message = "No Armors in index..";
		cout << message;
		my_armors[0];
	}
	remItem(my_armors[u].quantity);
	//return my_armors[u];
}

void inventory::selectlistWeapon(int u)
{
	if (my_weapons <= 0)
	{
		string message = "No Armors in index..";
		cout << message;
		my_weapons[0];
	}
	remItem(my_weapons[u].quantity);

	//return my_weapons[u];
}

void inventory::itemCall()
{
	Player_Actor he; //call vars
	Enemy en; // call vars
}

void inventory::PlayerItemInventory() // gotta make an inventory that'll work in the world menu
{
	system("CLS");
	// show choices'
	cout << "What menu would you like to select..?" << endl;
	cout << "Items(i), Armors(a), Weapons(w), Equipped(e), Quit(q)" << endl;
	char choice = {};
	int i = 0;
	switch (choice)
	{
	case 'i':
		cout << "Select an Item? or Exit? (Q,q): use an number to select one.. 0 - " + sum_items << endl;
		displaylistItem();
		// select an item? using a #
		cout << "select an item? using a #" << endl;
		//int i = 0;
		choice = 'N';
		cin >> i;
		selectlistItem(i);
		if (isalpha(i))
		{
			cout << "invalid option" << endl;
			PlayerItemInventory();
			break;
		}
		cout << "Make another selection?" << endl;
		PlayerItemInventory();
		break;

	case 'a':
		cout << "Select an Armor?: use an number to select one.. 0 - " + sum_armors << endl;
		displaylistArmor();
		// select an armor? using a #
		cout << "select an armor? using a #" << endl;
		//int i = 0;
		choice = 'N';
		cin >> i;
		selectlistArmor(i);
		//equip armor
		if (isalpha(i))
		{
			cout << "invalid option" << endl;
			PlayerItemInventory();
			break;
		}
		cout << "Make another selection?" << endl;
		PlayerItemInventory();
		break;

	case 'w':
		cout << "Select an Weapon?: use an number to select one.. 0 - " + sum_weapons << endl;
		displaylistWeapon();
		cout << "select an weapon? using a #" << endl;

		choice = 'N';
		cin >> i;
		selectlistWeapon(i);
		//equip armor
		if (isalpha(i))
		{
			cout << "invalid option" << endl;
			PlayerItemInventory();
			break;
		}
		cout << "Make another selection?" << endl;
		PlayerItemInventory();
		break;

	case 'e':
		cout << "Weapons equipped: select one for overview.. 0 - " + sum_weapons << endl;
		cout << "Armors equipped: select one for overview.. 0 - " + sum_armors << endl;
		//displaylistEQWgear();
		cout << endl;
		//displaylistEQAgear();
		cout << endl;
		cout << "select a gear? using a #" << endl;
		//int i = 0;
		choice = 'N';
		cin >> i;

		//selectlistWeapon(i);
		//equip armor
		if (isalpha(i))
		{
			cout << "invalid option" << endl;
			PlayerItemInventory();
			break;
		}
		cout << "Make another selection?" << endl;
		PlayerItemInventory();
		break;

	case 'q':
		break;

	default:
		break;
	}
}

void inventory::setWeapon(inventory::weapon weapon, int index)
{
	ActorWeaponE[index] = weapon;
}

void inventory::setArmor(inventory::armor gear, int index)
{
	ActorArmorE[index] = gear;
}

void inventory::rewardCall(int index)
{
	cout << itemlist[index].name << endl;
	addItem(itemlist[index].quantity);
	//return allitemList(index);
}

void inventory::armorCall(int index)
{
	cout << armorlist[index].name << endl;
	addItem(armorlist[index].quantity);
	//return allarmorList(index);
}

void inventory::weaponCall(int index)
{
	cout << weaponlist[index].name << endl;
	addItem(weaponlist[index].quantity);
	//return allweaponList(index);
}

void inventory::addItem(int find) {
	int i = 1;
	my_items[find].quantity += i; // calls the index and adds 1
} //adding to the struct array

void inventory::remItem(int find) {
	int i = 1;
	my_items[find].quantity -= i; // calls the index and adds 1
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