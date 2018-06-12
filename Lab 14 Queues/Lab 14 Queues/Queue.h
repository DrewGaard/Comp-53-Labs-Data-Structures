#ifndef QUEUE_HEADER
#define QUEUE_HEADER

#include <iostream>
#include "Node.h"

using namespace std;

class Queue {
private:
	Node *front, *back;

public:
	Queue();
	Queue(Queue& copyFrom);
	Node* getFront();
	void print();
	void enqueue(Student s);
	Student dequeue();
	~Queue();
};

#endif
