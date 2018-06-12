#include <iostream>
#include "Fraction.h";

using namespace std;

Fraction::Fraction(int n, int d)
{
	numerator = n;
	denominator = d;
}

Fraction Fraction::operator++(int)
{
	Fraction plusPlus;

	plusPlus.numerator = denominator + numerator;
	plusPlus.denominator = denominator;

	numerator = denominator + numerator;

	return plusPlus;
}

	//Fraction operator++(); this would be ++x

bool Fraction::operator>(Fraction rhs)
{
	if (numerator * rhs.denominator > rhs.numerator * denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator<(Fraction rhs)
{
	if (numerator * rhs.denominator < rhs.numerator * denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator==(Fraction rhs)
{
	if (numerator * rhs.denominator == rhs.numerator * denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

ostream& operator<<(ostream &out, Fraction &rhs)
{
	out << rhs.numerator << "/" << rhs.denominator;
	return out;
}

istream& operator>>(istream &in, Fraction &rhs)
{
	char junk;
	in >> rhs.numerator;
	in >> junk;				//Read the plus sign into junk because we don't want to have it in the equation
	in >> rhs.denominator;

	return in;
}