#ifndef __LIST__
#define __LIST__
#include "Node.h"
#include "Iterator.h"

class List
{
public:
	List();
	~List();
	void push_front(const int& value);
	void push_back(const int& value);
	void remove(const int& value);

	Iterator begin();
	Iterator end();

	int size();
	void PrintList();


private:
	Node* head; //start of linked list

	int amount = 0;
};

#endif
