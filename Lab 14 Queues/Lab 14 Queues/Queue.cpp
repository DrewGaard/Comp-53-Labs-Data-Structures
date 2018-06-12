#include <iostream>
#include "Queue.h"

Queue::Queue()
{

}

void Queue::enqueue(Student s)
{
	if (front == NULL)
	{
		front = new Node(s, NULL);
		back = front;
	}
	else
	{
		Node* temp = new Node(s, NULL);
		back->setNext(temp);
		back = temp;
	}
}

void Queue::print()
{
	if (front = NULL)
	{
		cout << "Queue is empty." << endl;
	}
	else
	{
		Node *cur = front;
		while (cur != NULL)
		{
			cout << cur->getData();
			cur = cur->getNext();
		}
	}
}

Student Queue::dequeue()
{
	Student ans;

	if (front == NULL)
	{
		return ans;
	}
	else if (front == back)
	{
		ans = front->getData();
		delete front;
		front = NULL;	//Reset front and back now because the list is now empty
		back = NULL;
		return ans;
	}
	else
	{
		ans = front->getData();	//Copy data
		Node* temp = front;
		front = front->getNext();
		delete temp;			//deallocate node
		return ans;
	}
}

Queue::~Queue()
{
	while (front != NULL)
	{
		dequeue();
	}
}