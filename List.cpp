#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	Node* next;
	while (head != nullptr)
	{
		next = head->next;
		delete head;
		head = next;
	}
}

List::~List() = default;

void List::push_front(const int& value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;

	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		newNode->next = head;
		head = newNode; 
	}

	amount++;
}

void List::push_back(const int& value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;

	Node* lastNode;
	lastNode = head;

	if (head == nullptr)
	{
		newNode->next = nullptr;
		head = newNode;
	}
	else
	{
		while (lastNode->next != nullptr)  
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	amount++;
}

void List::remove(const int& value)
{
	Node* tmpNode;
	tmpNode->next = head;

	Node* tmp;
	tmp->next = head;

	while (tmpNode->next != nullptr)
	{
		if (head->data == value)
		{
			tmp = head->next;
			tmpNode = head->next;
			delete head;
			head = tmp;
			amount--;
			continue;
		}

		if (tmpNode->next->data == value)
		{
			tmp = tmpNode->next->next;
			delete tmpNode->next;
			tmpNode->next = tmp;
			amount--;
		}
		tmpNode = tmpNode->next;
	}

}

Iterator List::begin()
{
	return Iterator(head);
}

Iterator List::end()
{
	return Iterator();
}

int List::size()
{
	return amount;
}

void List::PrintList()
{
	Node* index = new Node;
	index = head;

	if (head == nullptr)
	{
	}
	
	while (index->next != nullptr)
	{
		cout << index->data << " ";
		index = index->next;
	}
	cout << index->data << " ";
}



/*
when pushing to the front of a linked list
tmp = new Node;
tmp -> data = value;
make this new node point to where the first node was pointing
and make head point to this new node

when pushing to the back
check where the nullptr is then place the new node to point to the nullptr


deleting from a linked list
when you delete a node you need to make sure the pointers are all pointing
to the right places afterwards
*/