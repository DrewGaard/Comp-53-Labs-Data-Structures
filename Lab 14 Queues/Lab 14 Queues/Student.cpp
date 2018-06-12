#include "Student.h"
#include <iomanip>

Student::Student(int i, string n, double g)
{
	if (i >= 0)
		id = i;
	else
		id = 0;
	name = n;
	if (g >= 0 && g <= 4)
		gpa = g;
	else
		gpa = 0;
}

int Student::getID()
{
	return id;
}

string Student::getName()
{
	return name;
}

double Student::getGPA()
{
	return gpa;
}

void Student::setID(int i)
{
	if (i >= 0)
		id = i;
}

void Student::setName(string n)
{
	name = n;
}

void Student::setGPA(double g)
{
	if (g >= 0 && g <= 4)
		gpa = g;
}

ostream& operator << (ostream& out, Student s)
{
	out.setf(ios::fixed);
	out.precision(2);
	out << left << setw(10) << s.getID() << "   " << left << setw(20) << s.getName() << "   " << s.getGPA() << endl;
	return out;
}