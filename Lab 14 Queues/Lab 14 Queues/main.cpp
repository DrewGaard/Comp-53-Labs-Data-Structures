#include <iostream>
#include "Student.h"
#include "Queue.h"

using namespace std;

int main()
{
	Queue q1;

	//Create students
	Student Drew(989097751, "Drew", 4.0);
	Student Bob(989097752, "Bob", 3.8);
	Student Bill(989097753, "Bill", 4.2);
	Student George(989097754, "George", 3.9);

	cout << "Does this work?" << endl;

	//Enqueue
	q1.enqueue(Drew);

	cout << "Does this work?" << endl;

	q1.enqueue(Bob);
	q1.enqueue(Bill);
	q1.enqueue(George);

	q1.print();

	//Dequeue
}