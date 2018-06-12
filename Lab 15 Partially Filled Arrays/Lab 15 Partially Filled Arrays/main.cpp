#include <iostream>
#include "Template.h"

using namespace std;

int main()
{
	Template<double> arr;

	arr.addElement(2.45);
	arr.addElement(10.99);
	arr.addElement(11.2);
	arr.addElement(4.75);
	arr.addElement(12.45);
	arr.addElement(5.3);
	arr.addElement(9.99); 
	arr.addElement(100.2);
	arr.addElement(333.4);
	arr.addElement(632.21);

	arr.print();

	arr.removeElement(0);

	cout << "After we remove an element we are left with..." << endl;

	arr.print();

	cout << "The largest element in the array is: ";

	cout << arr.largest() << endl;
}