#ifndef HEAP_H
#define HEAP_H

#include "task.h"
#include <iostream>
#include <vector>
using namespace std;

class Heap
{
protected:
	vector<Task> elements;
	Task *elements;
	int MAXSIZE;
	int currentSize;

	int parentInd(int index);
	int lChildInd(int index);
	int rChildInd(int index);
	Task parent(int index);
	Task lChild(int index);
	Task rChild(int index);

public:
	Heap(int MAX = 10);

	void print();

	void insert(Task item);

	// Please implement the following functions:
	//void print();
	//void insert(Task item);
	//Task pop();
};

#endif