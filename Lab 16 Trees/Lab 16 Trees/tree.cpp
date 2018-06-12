#include "tree.h"

Tree::Tree(TNode *r)
{
	root = r;
}

void Tree::insert(int x)
{
	if (root == NULL)
	{
		root = new TNode(x);
	}
	else
	{
		root->insert(x);
	}
}

void Tree::print()
{
	if (root == NULL)
	{
		cout << "There is nothing in the tree to print!" << endl;
	}
	else
	{
		root->print();
	}
}

void Tree::printLeaves()
{
	if (root == NULL)
	{
		cout << root << endl;
	}
	else
	{
		root->printLeaves();
	}
}