
#pragma once
#define TRUE 1
#define FALSE 0
typedef int Data;
typedef struct _node
{
	Data data;
	struct _node* next;
}Node;

typedef struct CircularQuequ
{
	Node* front;
	Node* rear;
	int numofData;
}Quequ;






