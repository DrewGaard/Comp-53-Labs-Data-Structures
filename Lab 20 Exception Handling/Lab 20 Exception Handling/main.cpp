#include <iostream>
#include <string>
#include <fstream>
#include "FileNotFound.h"
#include "LineOverflow.h"
using namespace std;

void fileReader(string name, string &data) throw (FileNotFound, LineOverflow);

void main()
{
	string fileName, info;

	cout << "Enter a file name: ";
	cin >> fileName;

	try
	{
		fileReader(fileName, info);
	}
	catch (FileNotFound f)
	{
		cout << "Failed to open a file called " << f.getName() << endl;
		system("pause");
		exit(0);
	}
	catch (LineOverflow)
	{
		cout << "The File has more than 5 lines of text in it!" << endl;
		system("pause");
		exit(0);
	}
	catch (...) //the ... is for all other possible exceptions
	{
		cout << "An unknown file reading error occurred" << endl;
		system("pause");
		exit(0);
	}

	//File must have been read successfully if we got here
	cout << "The file contents are: " << endl;
	cout << info;

	system("pause");
}

void fileReader(string name, string &data) throw (FileNotFound, LineOverflow)
{
	ifstream in(name.c_str(), ios::_Nocreate);

	if (in.fail())
	{
		FileNotFound f(name);
		throw f;
	}
	else
	{
		data = "";
		while (!in.eof())
		{
			string temp;
			getline(in, temp);
			data += temp + "\n";
		}
	}

	int counter = 0;
	while (!in.eof() && counter < 5)
	{
		string temp;
		getline(in, temp);
		counter++;
		if (counter > 5)
		{
			LineOverflow f(name);
			throw f;
		}
	}

	if (counter > 5)
	{
		LineOverflow f(name);
		throw f;
	}
	else
	{
		data = "";
		while (!in.eof())
		{
			string temp;
			getline(in, temp);
			data += temp + "\n";
		}
	}

	in.close();
}
