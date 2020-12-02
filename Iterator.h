#ifndef __ITERATOR__
#define __ITERATOR__
#include "Node.h"

class Iterator
{
public:
	Iterator(Node* curNode = nullptr);
	~Iterator() = default;
	bool operator!=(const Iterator& other);
	Iterator operator++();
	int operator*();

private:
	Node* current;
	int size;

};

#endif