#include <iostream>
#include "hashtable.h"

using namespace std;

int main()
{
	Hashtable h;
	cout << "Testing on an empty hashtable..." << endl;
	h.print(); 
	/*
	Student s1("Bob", 113, 3.6);
	h.insert(s1);
	cout << "Printing with one element!" << endl;
	h.print();
	*/
	

	Student s1("Bob", 113, 3.6);	//All ID numbers end in 3 so they will collide and test linear probe
	Student s2("Bob2", 223, 4.0);
	Student s3("Bob3", 333, 3.8);
	Student s4("Bob4", 443, 2.1);
	Student s5("Bob5", 553, 1.8);
	Student s6("Bob6", 663, 3.9);
	h.insert(s1);
	h.insert(s2);
	h.insert(s3);
	h.insert(s4);
	h.insert(s5);
	h.insert(s6);
	cout << "Resulting hashtable: " << endl;
	h.print();
	

	
	cout << "Testing Search: " << endl;
	cout << "Search for ID 113 returns: " << h.search(113) << endl;

	cout << "Search for ID 443 returns: " << h.search(443) << endl;

	system("PAUSE");
}