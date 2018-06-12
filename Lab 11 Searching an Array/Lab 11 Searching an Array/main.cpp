#include <iostream>
#include <time.h>

using namespace std;

void fillArray(int data[], int SIZE);
int linearSearch(int data[], int SIZE, int number);
int binarySearch(int data[], int SIZE, int number);

int main()
{
	int SIZE = 400000000;
	int numtoFind;
	int quit;
	int number;
	int* data;
	data = new int[SIZE];
	long start, stop;


	fillArray(data, SIZE);

	do{
		cout << "Please enter a number to find between 0 and " << SIZE << " inclusive." << endl;
		cin >> numtoFind;

		cout << "Performing a linear search." << endl;
		start = clock();
		linearSearch(data, SIZE, numtoFind);
		stop = clock();
		cout << "It took " << stop - start << " milliseconds to search for " << numtoFind << " using Linear Search." << endl;

		start = clock();
		cout << "Performing a binary search." << endl;
		binarySearch(data, SIZE, numtoFind);
		stop = clock();
		cout << "It took " << stop - start << " milliseconds to search for " << numtoFind << " using Binary Search." << endl;
		
		cout << "Enter -1 to quit or any other number to continue searching." << endl;
		cin >> quit;
	} while (quit != -1);


}

void fillArray(int data[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		data[i] = i;
		i++;
	}
}

int linearSearch(int data[], int SIZE, int number)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (data[i] == number)
		{
			return i;
		}
	}

	return -1;				//If the number is not found return -1
}

int binarySearch(int data[], int SIZE, int number)
{
	int low = 0;
	int mid = 0;
	int high = 0;

	high = SIZE - 1;

	while (high >= low)
	{
		mid = (high + low) / 2;
		if (data[mid] < number)
		{
			low = mid + 1;
		}
		else if (data[mid] > number)
		{
			high = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}