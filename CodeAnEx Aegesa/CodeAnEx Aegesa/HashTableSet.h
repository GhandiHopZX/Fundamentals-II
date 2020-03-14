#include <list>
#include <vector>
#include <iostream>

using namespace std;

class HashTableSet
{
private:
	static const int hashGroups = 48;
	list<pair<int, string>> table[hashGroups];

public:
	HashTableSet();
	~HashTableSet();

	bool isEmpty() const;
	int hash(int key);
	void insertItem(int key, string value);
	void removeItem(int key);
	string searchTable(int key);
	void printTable();
};
