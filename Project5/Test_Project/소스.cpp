
#include <iostream>
class TestClass

{
	int a = 10;

public:

	void addNo2()

	{

		TestClass tc2;

		tc2.a = 20;

	};

	void addNo() { a += 10; };

};


int main()

{
	TestClass tc;

	printf(tc.addNo2());

}