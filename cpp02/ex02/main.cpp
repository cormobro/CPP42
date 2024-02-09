#include "Fixed.hpp"

int	main( void ) 
{ 
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( b) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "addition:" << std::endl << a + a << std::endl;
	std::cout << "soustraction:" << std::endl << a - a << std::endl;
	std::cout << "multiplication:" << a * a << std::endl;
	std::cout << "division:" << a / a << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( c, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::min( c, b ) << std::endl;
	return 0; 
}
