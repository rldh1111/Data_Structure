#include <iostream>
using namespace std;

int main(void)
{
	int a[4][5];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
}

void echo(int a[4][5], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

