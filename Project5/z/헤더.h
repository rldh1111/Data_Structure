#pragma once
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

	ArrayList(){
		numofData = 0;
		this->curPosition = -1;
	}
	~ArrayList() {};
	void insert(T data)
	{
		this->arr[numofData++] = data;
	}

	T remove(){
		for (int i = this->curPosition; i < this->numofData; i++) {
			this->arr[i] = this->arr[i +1];
		}
		return this->arr[curPosition];
	}

	T first(){
		this->curPosition = 0;
		return this->arr[curPosition];
	}

	T Next(){
		if (this->curPosition >= this->numofData - 1)
			return FALSE;
		(this->curPosition)++;
		return this->arr[this->curPosition];
	}


};
