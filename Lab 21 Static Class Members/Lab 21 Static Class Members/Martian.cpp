#include "Martian.h"

int Martian::totalMartians = 0; //This is how you instantiate a static attribute
								//Static attributes are shared with all of the different objects

Martian::Martian()
{
	total = 0;
}

int Martian::getTotal()
{
	return total;
}

int Martian::getTotalMartians()
{
	return totalMartians;
}

void Martian::setTotal(int t)
{
	total = t;
}

void Martian::setTotalMartians(int t)
{
	totalMartians = t;
}
