#include "tnode.h"
#include <iostream>

using namespace std;

TNode::TNode(int d, TNode* l, TNode* r)
{
	data = d;
	lchild = l;
	rchild = r;
}

void TNode::insert(int x)
{
	if (x < data)
	{
		if (lchild == NULL)
		{
			lchild = new TNode(x);
		}
		else
		{
			lchild->insert(x);
		}
	}
	else
	{
		if (rchild == NULL)
		{
			rchild = new TNode(x);
		}
		else
		{
			rchild->insert(x);
		}
	}
}

void TNode::print() //Preorder printing so the root will be the first item to print
{
	cout << data << endl;
	if (lchild != NULL)
	{
		lchild->print();
	}
	if (rchild != NULL)
	{
		rchild->print();
	}
}

//For post order put 'cout << data << endl;' at the end of the function
//For in order put 'cout << data << endl;' in the middle of the functions statements

void TNode::printLeaves()
{
	if (lchild == NULL && rchild == NULL)
	{
		cout << data << endl;
	}
	else
	{
		if (lchild != NULL)
		{
			lchild->printLeaves();
		}
		if (rchild != NULL)
		{
			rchild->printLeaves();
		}
	}
	//cout << data << endl;
	//lchild->printLeaves();
}