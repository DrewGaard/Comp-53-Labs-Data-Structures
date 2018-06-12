#include <iostream>
#include "Item.h"
#include "LinkedList.h"

using namespace std;

int main()
{
	Item *a = new Item("Apple");
	Item *b = new Item("Banana");
	Item *c = new Item("Cookie");
	Item *d = new Item("Donut");

	//Make a list and put elements in it
	LinkedList list;
	list.insert(a);
	list.insert(b);
	list.insert(c);
	list.insert(d);

	

	//Test out finding elements
	a = list.find("Orange");
	if (a == 0) cout << "Orange is not in the list" << endl;
	else cout << a->getName() << " is in the list" << endl;
	a = list.find("Cookie");
	if (a == 0) cout << "Cookie is not in the list" << endl;
	else cout << a->getName() << " is in the list" << endl;

	

	//Test out removing elements
	a = list.remove("Grape");
	if (a == 0) cout << "Grape is not in the list" << endl;
	else
	{
		cout << a->getName() << " is being deleted ..." << endl;
		delete a;
	}

	a = list.remove("Donut");
	if (a == 0) cout << "Donut is not in the list" << endl;
	else
	{
		cout << a->getName() << " is being deleted ..." << endl;
		delete a;
	}

	//Loop through all of the elements
	cout << "Here are the elements in the list:" << endl;
	Item *current = list.getFirstElement();
	while (current != 0) //end when there are no more elements in the list
	{
		cout << current->getName() << endl;
		current = current->getNext();
	}
	system("pause");

	
}
