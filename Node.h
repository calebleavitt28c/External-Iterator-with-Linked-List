#ifndef __NODE__
#define __NODE__
#include "Observer.h"

class Node
{
public:
	Node();
	Node* next = nullptr;
	int data = 0;

private:
	Observer tmp;  // for testing purposes only. DO NOT REMOVE
};

#endif