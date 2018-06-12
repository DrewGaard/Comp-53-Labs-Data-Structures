#include "heap.h"

/***** Accessors for Indices and Elements *****/

int Heap::parentInd(int index) { return (index - 1) / 2; }
int Heap::lChildInd(int index) { return 2 * index + 1; }
int Heap::rChildInd(int index) { return 2 * index + 2; }

Task Heap::parent(int index) { return elements[(index - 1) / 2]; }
Task Heap::lChild(int index) { return elements[2 * index + 1]; }
Task Heap::rChild(int index) { return elements[2 * index + 2]; }

// Constructor
Heap::Heap(int MAX)
{
	elements = new Task[MAX];
	MAXSIZE = MAX;
	currentSize = 0;
}

void Heap::print()
{
	
}

void Heap::insert(Task item)
{
	if (item.getPriority = 0)
	{
		elements->setPriority(0);
	}
}

// PLEASE WRITE THE REST OF THE FUNCTIONS