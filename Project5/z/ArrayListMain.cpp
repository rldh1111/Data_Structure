#include <iostream>
#include "Çì´õ.h"
int main(void)
{
	using namespace std;
	ArrayList<int> list;
	ArrayList<int> list2;
	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.insert(6);


	cout << list.first() << endl;
	list.remove();
	cout << list.first() << endl;


	return 0;
}