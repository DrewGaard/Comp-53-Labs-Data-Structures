#include <iostream>
#include <string>

using namespace std;

int factorial(int, string);
int sumToX(int);
int gcd(int, int);
int sumBetween(int, int);
int power(int, int);
void convert(int);

int main()
{
	string tab = "";
	cout << factorial(8, tab) << endl;


	cout << endl << "Now attempting the sumToX recursive function." << endl;
	cout << sumToX(-3) << endl;

	cout << endl << "Now attempting the gcd recursive function." << endl;
	cout << gcd(3, 4) << endl;
	
	cout << endl << "Now attempting the sumBetween recursive function." << endl;
	cout << sumBetween(6, 8) << endl;

	cout << endl << "Now attempting the power recursive function." << endl;
	cout << power(2, 4) << endl;

	cout << endl << "Now attempting the convert to binary recursive function." << endl;
	convert(4);
	cout << endl;
}

int factorial(int num, string tab)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}
	else if (num < 0)
	{
		cout << "You entered a negative number which will not work with factorials!" << endl;
		return 0;
	}
	else
	{
		cout << tab << num << endl;
		return num * factorial(num - 1, tab + " ");

	}
}

int sumToX(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else if (num > 0)
	{
		return num + sumToX(num - 1);
	}
	else if (num < 0)
	{
		return num + sumToX(num + 1);
	}
}

int gcd(int M, int N)
{
	if (M == 0)
	{
		return M;
	}
	else if (N == 0)
	{
		return N;
	}
	else
	{ 
		return gcd(N, (M % N));
	}
}

int sumBetween(int x, int y)
{
	if (x == y)
	{
		return x;
	}
	else if (x < y)
	{
		return x + sumBetween(x + 1, y);
	}
	else
	{
		return x + sumBetween(x - 1, y);
	}
}

int power(int base, int ex)
{
	if (ex == 1)
	{
		return base;
	}
	else if (ex == 0)
	{
		return 1;
	}
	else
	{
		return base * power(base, ex - 1);
	}
}

void convert(int x)
{
	if (x == 0)
	{
		cout << "0";
		return;
	}
	else if (x == 1)
	{
		cout << "1";
		return;
	}
	else
	{
		convert(x % 2);
		cout << x % 2;
	}
}

