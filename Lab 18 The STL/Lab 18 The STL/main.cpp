#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "player.h"

using namespace std;

int main()
{
	vector <int> v(10);
	v[0] = 5;
	v.push_back(12);		//If there is not enough space, then more space is added
	v.push_back(24);
	
	std::map <string, Player> data;

	Player p1, p2, p3, p4;

	p1.setName("Drew");
	p2.setName("Ben");
	p3.setName("Sean");
	p4.setName("John");

	data["Drew"] = p1;
	data["Ben"] = p2;
	data["Sean"] = p3;
	data["John"] = p4;

	std::map <string, Player>::iterator itrMap;

	//This is the Map Iterator using a for loop
	int indexMap = 0;
	for (itrMap = data.begin(); itrMap != data.end(); itrMap++)
	{
		cout << itrMap->second.getName() << endl;
		indexMap++;
	}

	

	//Use an iterator to "loop" through the vector
	vector<int>::iterator itr;	//Creates an iterator for a vecto of intergers
	//itr = v.begin();	Makes itr "point to" the first thing in the vector needed outside loop for while loop

	int index = 0;
	for (itr = v.begin(); itr != v.end(); itr++)
	{
		cout << "[" << index << "] is " << *itr << endl;
		index++;
	}

	//Not using an iterator
	for (int i = 0; i < v.size(); i++)
	{
		cout << "[" << i << "] is " << v[i] << endl;
	}
	system("pause");
	return 0;
}