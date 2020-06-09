#pragma once

#include <iostream>
#define TRUE 1
#define FALSE 0
class Node
{
	friend class Deque;
private:
	Node* next;
	Node* prev;
	int data;
};

class Deque
{
private:
	Node* head;
	Node* tail;
public:
	Deque()
		: head(NULL), tail(NULL){};
	
	int isEmpty()
	{
		if (head == NULL)
			return TRUE;
		else
			return FALSE;
	}
	void frontEnquequ(int data)
	{
		Node* newData = new Node;
		newData->data = data;
		newData->next = head;
		if (isEmpty())
		{
			tail = newData;
		}
		else {
			head ->prev = newData;
		}
		newData->prev = NULL;
		head = newData;


	}
	void rearEnquqeu(int data)
	{
		Node* newData = new Node;
		newData->data = data;
		newData->prev = tail;
		if (isEmpty()) {
			head = newData;
		}
		else {
			tail->next = newData;
		}
		newData->next = NULL;
		tail = newData;

	}
	int frontDequequ()
	{
		if(isEmpty())
		{
			return FALSE;
		}
		Node* delNode = head;
		int delData = head->data;
		head = head->next;
		delete delNode;
		return delData;
	}
	int rearDequuqe()
	{
		Node* delNode = tail;
		int delData = tail->data;
		tail = tail->prev;
		delete delNode;
		return delData;
	}
	int frontPeek()
	{
		return head->data;
	}
	int rearPeek()
	{
		return tail->data;
	}
	void print()
	{
		Node *firstNode = head;
		while (head != NULL) {
			std::cout << head->data << std::endl;
			head = head->next;
		}
		head = firstNode;
	}
};