#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
	double real;
	double imaginary;

public:
	Complex(double r = 0, double i = 0);
	Complex operator+(Complex rhs);
	Complex operator-(Complex rhs);
	friend ostream& operator<<(ostream &out, Complex &rhs); //Reference to the cout in main
	friend istream& operator>>(istream &in, Complex &rhs);
	operator double();
};
