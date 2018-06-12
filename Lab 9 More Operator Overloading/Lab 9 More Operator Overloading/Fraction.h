#include <iostream>

using namespace std;

class Fraction{
private:
	int numerator;
	int denominator;


public:
	Fraction(int n = 0, int d = 1);

	Fraction operator++(int); //x++ we add the int in order to do a post increment

	//Fraction operator++(); this would be ++x

	bool operator>(Fraction rhs); //Copy of object on the right hand side

	bool operator<(Fraction rhs);

	bool operator==(Fraction rhs);

	friend ostream& operator<<(ostream &out, Fraction &rhs); //Reference to the cout in main
	friend istream& operator>>(istream &in, Fraction &rhs);
};