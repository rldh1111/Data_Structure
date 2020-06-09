#include "dequee.h"

int main(void)
{
	Deque dq;
	dq.rearEnquqeu(1);
	dq.rearEnquqeu(2);
	dq.rearEnquqeu(3);
	dq.rearEnquqeu(4);
	dq.rearEnquqeu(5);
	dq.print();

	std::cout << dq.frontPeek() << std::endl;
	dq.print();
	return 0;
}