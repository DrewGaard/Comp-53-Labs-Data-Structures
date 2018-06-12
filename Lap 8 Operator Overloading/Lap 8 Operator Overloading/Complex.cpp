#include "Complex.h"
#include <iostream>
#include <string>

using namespace std;

Complex::Complex(double r, double i)
{
	real = r; imaginary = i;
}

Complex Complex::operator+(Complex rhs)
{
	Complex Addition;

	Addition.real = real + rhs.real;
	Addition.real = imaginary + rhs.imaginary;
	return Addition;
}

Complex Complex::operator-(Complex rhs)
{
	Complex Subtraction;

	Subtraction.real = real - rhs.real;
	Subtraction.real = imaginary - rhs.imaginary;
	return Subtraction;
}

ostream& operator<<(ostream &out, Complex &rhs)
{
	out << rhs.real << "+" << rhs.imaginary << "i";
	return out;
}

istream& operator>>(istream &in, Complex &rhs)
{
	char junk;
	in >> rhs.real;
	in >> junk;				//Read the plus sign into junk because we don't want to have it in the equation
	in >> rhs.imaginary;
	in >> junk;
	return in;
}

Complex::operator double()
{
	return real;
}


