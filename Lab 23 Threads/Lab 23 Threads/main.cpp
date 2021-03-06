// Programmer: Dan Cliburn
// Date: 9/10/2015
// Purpose: This is the source code for Lab 23 in COMP 53. It illustrates the use of threads
// to compute the number of prime values between 1 and 400000 with both a serial method and 
// a parallel method for computing the answer.

#include <iostream>
#include <time.h>
#include "PrimeCounter.h"
using namespace std;

int main()
{
	const int SIZE = 400000;
	long start, stop;
	PrimeCounter p(SIZE);

	cout << "Determining the primes ..." << endl;
	start = clock();
	//p.serialDeterminePrimes(1, SIZE);
	p.parallelDeterminePrimes(1, SIZE);
	stop = clock();

	cout << "Time: " << (stop - start) << " milliseconds" << endl;
	cout << "There were " << p.getTotalPrimes() << " prime numbers between 0 and " << SIZE << endl;
	cout << "There were " << p.countPrimeValues(1, SIZE) << " prime values between 0 and " << SIZE << endl;

	cout << "Press <Enter> to close." << endl;
	cin.get();
	return 0;
}