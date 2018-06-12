#include "hashtable.h"

// I need to be written

int Hashtable::hash(int key)
{
	int location;

	location = key % SIZE;
	return location;
}

void Hashtable::print()
{
	int i = 0;
	while (i < SIZE)
	{
		if (table[i].getID() != -1)
		{
			cout << table[i] << endl;
		}
		i++;
	}
}

void Hashtable::insert(Student s)
{
	int hashIndex = hash(s.getID());
	int index = hashIndex;
	do
	{
		if (table[index].getID() == -1)
		{
			table[index] = s;
			return;
		}
		index = (index + 1) % SIZE;
	} while (index != hashIndex);
	cout << "The hashtable is full! The data could not be inserted." << endl;
}

//Still working on this function
Student Hashtable::search(int id)
{
	int hashIndex = hash(id);
	int index = hashIndex;
	int i = 0;
	do
	{
		if (table[index].getID() == id)
		{
			return table[index];
			index = (index + 1) % SIZE;
		}
		i++;
	} while (i < SIZE);
}
