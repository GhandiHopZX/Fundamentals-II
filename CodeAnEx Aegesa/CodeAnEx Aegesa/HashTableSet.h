#include <list>
#include <vector>
#include <iostream>
#include <unordered_set>
#include "skillAction.h"

using namespace std;

class HashTableSet // with this you can make multiple hashes with calculations that will be handy through out this project
{
private:
	static const int hashGroups = 400;
	list<pair<int, string>> nametable[hashGroups];

public:
	HashTableSet();
	~HashTableSet();

	bool isEmpty() const;
	int hash(int key);
	void insertItem(int key, string value);
	void removeItem(int key);
	string searchTable(int key);
	void printTable();

	// for hashes
	int skillCall(int sk);
};
