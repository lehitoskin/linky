// DList.cpp
#include "DList.h"

// add a new element to the end of the list
void DList::add(int value)
{
	if (head == NULL)
		head = new Node(value);
	else
	{
		// the list is not empty
		// use node_ptr to traverse the list
		Node *node_ptr = head;

		while (node_ptr->next != NULL)
			node_ptr = node_ptr->next;

		// node_ptr->next is NULL so node_ptr points to the last node
		// create a new node and put it after the last node.
		node_ptr->next = new Node(value);

		// tell the new node who its prev is
		node_ptr->next->prev = node_ptr;
	}
}

DList::~DList()
{
	Node *node_ptr = head;

	while (node_ptr != NULL)
	{
		// keep track of the node we want to delete
		Node *garbage = node_ptr;
		// move to the next node
		node_ptr = node_ptr->next;
		// delete allocated memory
		delete garbage;
	}
}
