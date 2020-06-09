
#define TRUE 1
#define FALSE 0
#define LEN 100
template<typename T>
class ArrayList
{
private:
	T arr[LEN];
	int numofData;
	int curPosition;

public:

	ArrayList() {
		numofData = 0;
		curPosition = -1;
	}

	void insert(T data)
	{
		if (numofData == LEN - 1) {
			cout << "저장공간 없음";
		}
		arr[numofData++] = data;
	}

	T delete()
	{
		for (int i = curPosition; i < numofData; i++) {
			arr[curPosition] = arr[curPosition + i];
		}
		return arr[curPosition];
	}

	T First()
	{
		curPosition = 0;
		return arr[curPosition];
	}

	T Next
	{
		if (curPosition >= numOfData - 1)
			return FALSE;
		(curPosition)++;
		return arr[curPosition];
	}


};
