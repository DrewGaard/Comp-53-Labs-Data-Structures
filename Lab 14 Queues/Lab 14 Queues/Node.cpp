#include "Node.h"
using namespace std;

Node::Node()
{
	next = NULL;
}
Node::Node(Student item, Node* n)
{
	data = item;
	next = n;
}
Student Node::getData()
{
	return data;
}
Node* Node::getNext()
{
	return next;
}
void Node::setData(Student item)
{
	data = item;
}
void Node::setNext(Node* n)
{
	next = n;
}
