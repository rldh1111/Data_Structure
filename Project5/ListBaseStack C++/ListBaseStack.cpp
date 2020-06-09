#include "ListBaseStack.h"

int main(void)
{
	Stack stack;
	stack.push(1);
	stack.push(12);
	stack.push(31);
	stack.push(154);
	stack.push(16);

	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	std::cout << stack.pop() << std::endl;
	return 0;
}