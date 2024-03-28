#include "Identify.hpp"

Base *	generate(void)
{
	int	num = std::rand() % 3 + 1;
	if (num == 1)
		return (new A());
	else if (num == 2)
		return (new B());
	else if (num == 3)
		return (new C());
	return (NULL);
}

void	identify(Base* p)
{
	if (p == NULL)
		std::cout << "NULL" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "Error" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A & aptr = dynamic_cast<A &>(p);
		(void)aptr;
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast &e)
	{}
	try
	{
		B & bptr = dynamic_cast<B &>(p);
		(void)bptr;
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast &e)
	{}
	try
	{
		C & cptr = dynamic_cast<C &>(p);
		(void)cptr;
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast &e)
	{}
}
