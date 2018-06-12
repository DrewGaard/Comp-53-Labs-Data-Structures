#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
	int id;
	string name;
	double gpa;
public:
	Student(int i = 0, string n = "N/A", double g = 0);
	int getID();
	string getName();
	double getGPA();
	void setID(int i = 0);
	void setName(string n = "N/A");
	void setGPA(double g = 0);
};

ostream& operator << (ostream& out, Student s);

#endif