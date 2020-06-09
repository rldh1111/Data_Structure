//#include <iostream>
//
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(int);
//	int min;
//	for (int i = 0; i < len - 1; i++)
//	{
//		min = i;
//		for (int j = i + 1; i < len; j++)
//		{
//			if (arr[min] > arr[j])
//			{
//				min = j;
//			}
//			int temp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = temp;
//		}
//		
//	}
//	for (int i = 0; i < len; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//}