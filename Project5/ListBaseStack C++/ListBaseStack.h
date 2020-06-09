#pragma once
#define FALSE 0
#define TRUE 1
#include <iostream>
class Node
{
	friend class Stack;
private:
	int data;
	Node* next;
};

class Stack
{
private:
	Node* head;
public:
	Stack()
		:head(nullptr) {};
	void push(int data) {
		Node* newData = new Node;
		newData->data = data;
		newData->next = head;
		head = newData;
	}

	int pop()
	{
		if(isEmpty())
			std::cout << "stack error";
		Node* rnode = head;
		int data = head->data;
		head = head->next;
		delete rnode;
		return data;
	}

	int peek()
	{

	}

	int isEmpty()
	{
		if (head == nullptr)
			return TRUE;
		else
			return FALSE;
	}
};