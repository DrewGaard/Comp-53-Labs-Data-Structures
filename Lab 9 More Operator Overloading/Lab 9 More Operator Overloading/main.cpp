#include <iostream>
#include "Fraction.h";

using namespace std;

int main()
{
	Fraction X, Y, Z;

	cout << "Enter two fractions (in the form numerator/denominator): ";
	cin >> X;
	cin >> Y;

	if (X > Y) cout << X << " is bigger than " << Y << endl;
	else if (X < Y) cout << X << " is less than " << Y << endl;
	else if (X == Y) cout << X << " is equivalent to " << Y << endl;

	cout << X << "++ is ";
	X++;
	cout << X << endl;

	system("pause");
	return 0;
	
}






//In class example about division and data types
/*
double half = 1.0 / 2.0;
double third = 1 / 3;
cout << half << endl;
cout << third << endl;
system("PAUSE");
*/