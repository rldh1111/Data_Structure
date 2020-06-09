#include <iostream>
int main(void)
{
	using namespace std;
	int arr[5] = { 10,3,6,7,2};
	int len = sizeof(arr) / sizeof(int);
	int inData;
	int i, j;
	for ( i = 1; i < len; i++)
	{
		inData = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] < inData)
			{
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j + 1] = inData;
	}
	for (i = 0; i < len; i++)
	{
		cout << arr[i];
	}
}