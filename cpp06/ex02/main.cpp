#include "Identify.hpp"
#include <ctime>

int	main( void )
{
	std::srand(std::time(0));

	Base *a = generate();
	std::cout << "Base a" << std::endl;
	identify(*a);
	identify(a);

	Base *b = generate();
	std::cout << "Base b" << std::endl;
	identify(*b);
	identify(b);

	Base *c = generate();
	std::cout << "Base c" << std::endl;
	identify(*c);
	identify(c);

	Base *d = generate();
	std::cout << "Base d" << std::endl;
	identify(*d);
	identify(d);

	Base *e = NULL;
	std::cout << "Base e (NULL)" << std::endl;
	identify(e);
	identify(*e);
	delete	a;
	delete	b;
	delete	c;
	delete	d;

	return (0);
}
