#include <list>
#include <cstring>
#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>
#include "skillAction.h"
#include "HashTableSet.h"

using namespace std;

// make more constructors?

HashTableSet::HashTableSet() // you cant include this class anywhere else bc of its identity 
{
	skill_Sum = 0;
	shash_Value = 0;
	skey_exists = 0;
}

HashTableSet::HashTableSet(int key, skillAction meeep)
{
	skill_Sum = 0;
	shash_Value = 0;
	skey_exists = 0;
}

//HashTableSet SkillList;

#pragma region nameList
inline bool HashTableSet::isEmpty() const
{
	int sum{};
	for (int i{}; i < hashGroups; i++)
	{
		sum += nametable[i].size();
	}

	if (!sum)
	{
		return true;
	}
	return false;
}

inline int HashTableSet::hash(int key) // hashfunction
{
	return key % hashGroups; // Key: 905, in return, this function will spit out 5.
}

inline void HashTableSet::insertItem(int key, string value)
{
	int hashValue = hash(key);
	auto& cell = nametable[hashValue];
	auto bItr = begin(cell);
	bool keyExists = false;
	for (; bItr != end(cell); bItr++)
	{
		if (bItr->first == key)
		{
			keyExists = true;
			bItr->second = value;
			cout << "[WARNING] Key exists. Value replaced." << endl;
			break;
		}
	}

	if (!keyExists)
	{
		cell.emplace_back(key, value);
	}
	return;
}

inline void HashTableSet::removeItem(int key)
{
	int hashValue = hash(key);
	auto& cell = nametable[hashValue];
	auto bItr = begin(cell);
	bool keyExists = false;
	for (; bItr != end(cell); bItr++)
	{
		if (bItr->first == key)
		{
			keyExists = true;
			bItr = cell.erase(bItr);
			cout << "[INFO] Pair removed." << endl;
			break;
		}
	}

	if (!keyExists)
	{
		cout << "[WARNING] Key not found. PAIR NOT REMOVED." << endl;
	}
	return;
}

inline string HashTableSet::searchTable(int key)
{
	return string();
}

inline void HashTableSet::printTable()
{
	for (int i{}; i < hashGroups; i++)
	{
		if (nametable[i].size() == 0) continue;

		auto bItr = nametable[i].begin();
		for (; bItr != nametable[i].end(); bItr++)
		{
			cout << "[INFO] Key: " << bItr->first << " Value: " << bItr->second << endl;
		}
	}
	return;
}
#pragma endregion


#pragma region skillList
bool HashTableSet::sisEmpty() const
{
	return false;
}

int HashTableSet::skillHash(int)
{
	return 0;
}

void HashTableSet::insertSkill(int key, skillAction m)
{

}

void HashTableSet::removeSkItem(int)
{
}

string HashTableSet::searchSkTable(int)
{
	return string();
}

void HashTableSet::printSkTable()
{
}

skillAction HashTableSet::skillCall(int sk)
{
	return skillAction();
}
#pragma endregion

HashTableSet::~HashTableSet()
{

}