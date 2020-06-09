#include "ListBaseQuequ.h"


int main(void)
{
	Quequ q;
	q.enQuequ(1);
	q.enQuequ(2);
	q.enQuequ(3);
	q.enQuequ(4);
	q.enQuequ(5);
	
	std::cout << q.deQuequ() << std::endl;
	std::cout << q.deQuequ() << std::endl;
	std::cout << q.deQuequ() << std::endl;
	std::cout << q.deQuequ() << std::endl;
	std::cout << q.deQuequ() << std::endl;
	

	return 0;
}