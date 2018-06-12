#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Template {
private:
	int SIZE;
	T element;
	T arr[10];
	
public:
	Template::Template()
	{
		SIZE = 0;
	}

	void Template::print()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << endl;
		}
	}

	void Template::addElement(T element)
	{
		if (SIZE < 10)
		{
			arr[SIZE] = element;
			SIZE++;
		}
		else
		{
			cout << "The array already has 10 elements in it." << endl;
		}
	}

	void Template::removeElement(int index)		//Move all the elements after the element to be removed down one
	{
		//store index
		for (int i = index; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		SIZE--;
	}

	T Template::largest()	//Loop throught the array
	{
		T Biggest = arr[0];

		for (int i = 1; i < SIZE; i++)
		{
			if (arr[i] > Biggest)
			{
				Biggest = arr[i];
			}
		}	
		return Biggest;
	}
};