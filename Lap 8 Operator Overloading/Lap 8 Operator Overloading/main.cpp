#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex X, Y, Z;

	cout << "Enter two complex numbers (in the form 7.1+8.3i): ";
	cin >> X;
	cin >> Y;

	Z = X + Y;
	cout << X << " + " << Y << " = " << Z << endl;
	Z = X - Y;
	cout << X << " - " << Y << " = " << Z << endl;

	cout << X << " as a double is " << (double)X << endl;

	system("pause");
	return 0;
}