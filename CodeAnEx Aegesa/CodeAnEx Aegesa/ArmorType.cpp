#include "ArmorType.h"


void inventory::armorCall(int index)
{
	cout << armorlist[index].name << endl;
	addItem(armorlist[index].quantity);
	//return allarmorList(index);
}

