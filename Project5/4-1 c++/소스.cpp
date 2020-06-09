#include <iostream>
#include "DLinkedList.h"

int main(void)
{
	LinkedList  list;
	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.insert(6);

	using namespace std;
	cout << list.LFirst() << endl;
	cout << list.LNext() << endl;
	cout << list.LNext() << endl;
	cout << list.LNext() << endl;
	cout << list.LNext() << endl;
	cout << list.LNext() << endl;
	for (auto ele : list)
	{
		cout << ele << endl;
	}
	return 0;
}