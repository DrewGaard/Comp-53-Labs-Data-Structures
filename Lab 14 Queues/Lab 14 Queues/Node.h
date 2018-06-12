#ifndef NODE_H
#define NODE_H

#include "Student.h"

class Node
{
protected:
	Student data;
	Node* next;
public:
	Node();
	Node(Student item, Node* n = NULL);
	Student getData();
	Node* getNext();
	void setData(Student item);
	void setNext(Node* n);
};

#endif