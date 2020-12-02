#include <cassert>
#include "Iterator.h"

Iterator::Iterator(Node* curNode)
{
	current = curNode;
}

bool Iterator::operator!=(const Iterator& other)
{
	if (this->current != other.current)
		return true;
	else
		return false;
}

Iterator Iterator::operator++()
{
	current = current->next;
	return *this; //this returned a dereferenced pointer to the Iterator class
}

int Iterator::operator*()
{
	return current->data;
}
