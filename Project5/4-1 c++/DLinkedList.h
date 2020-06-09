#pragma once


class Node {
	friend class LinkedList;
private:
	Node* next;
	int data;
};
 class LinkedList
{
private:
	Node* head;
	Node* cur;
	Node* before;
	Node* tail;
	int numOfData;

public:
	LinkedList()
		: head(new Node), cur(NULL), before(NULL), numOfData(0), tail(NULL)
		
	{
		head->next = NULL;
	};
	void insert(int data) {
		Node* newData = new Node;
		newData->data = data;
		newData->next = head->next;
		head->next = newData;
		numOfData++;
	}
	int remove() {
		Node* rpos = cur;
		int data = rpos->data;
		before->next = cur->next;
		cur = before;
		numOfData--;
		delete rpos;
		return data;
	}
	int count()
	{
		return numOfData;
	}
	int LFirst()
	{

		before = head;
		cur =head->next;
	
		return cur->data;
	}
	int LNext()
	{


		before = cur;
		cur =cur->next;
	
		return cur->data;
	}

	Node* begin() { 
		return head;
	}
	Node* end()
	{
		return tail;
	}

};




