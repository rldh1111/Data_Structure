#pragma once
#include <iostream>
#define TRUE 1
#define FALSE 0

class Node
{
	friend class Quequ;
private:
	int data;
	Node* next;
};

class Quequ
{
private:
	Node* front;
	Node* rear;
public:
	Quequ() :front(NULL), rear(NULL) {};

	void enQuequ(int data){
		Node* newData = new Node;
		newData->data = data;
		newData->next = NULL;
		if (isEmpty()) {
			front = newData;
			rear = newData;
		}
		else {
			rear->next = newData;
			rear = newData;
		}
	}
	int deQuequ() {
		Node* rNode;
		int rdata;
		if (isEmpty()) {
			std::cout << "No Data" << std::endl;
		}
		rNode = front;
		rdata = front->data;
		front = front->next;
		delete rNode;
		return rdata;
	}

	int isEmpty() {
		if (front == NULL)
			return TRUE;
		else
			return FALSE;
	}

	int peek() {
		return front->data;
	}

};