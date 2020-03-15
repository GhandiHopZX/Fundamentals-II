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
}

//HashTableSet SkillList;

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

inline void HashTableSet::insertSkill(skillAction m)
{

}

//int HashTableSet::skillCall(int sk)
//{
//	//Hash here
//	SkillList.hash(sk);
//}

HashTableSet::~HashTableSet()
{

}