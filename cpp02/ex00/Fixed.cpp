#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Constructor has been called for fixed point class" << std::endl;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor has been called for fixed point class" << std::endl;
	this->_value = copy.getRawBits();
}

Fixed&	Fixed::operator = (const Fixed &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for fixed point class" << std::endl;
	this->_value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Fixed point class has been destroyed" << std::endl;
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
