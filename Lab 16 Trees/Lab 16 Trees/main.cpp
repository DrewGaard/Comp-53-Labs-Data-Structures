#include <iostream>
#include "tree.h"

using namespace std;

int main() 
{
	Tree BST;

	BST.insert(50);
	BST.insert(75);
	BST.insert(60);
	BST.insert(65);
	BST.insert(10);
	BST.insert(45);
	BST.insert(99);
	BST.insert(70);
	BST.insert(25);

	BST.print();

	cout << "Testing the print leaves function!" << endl;

	BST.printLeaves();

	system("PAUSE");
}