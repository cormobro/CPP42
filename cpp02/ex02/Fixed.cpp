#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Constructor has been called for fixed point class" << std::endl;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor has been called" << std::endl;
	this->_value = number * static_cast<int>(pow(2, this->_fractional));
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor has been called" << std::endl;
	this->_value = roundf(number * pow(2, this->_fractional));
}
Fixed::Fixed(Fixed const &copy)
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

std::ostream& operator << (std::ostream& os, const Fixed& point)
{
    os << point.toFloat();
    return os;
}

float Fixed::toFloat(void) const
{
    return (this->_value / pow(2, this->_fractional));
}

int Fixed::toInt(void) const
{
    return (this->_value / static_cast<int>(pow(2, this->_fractional)));
}

bool  Fixed::operator < (const Fixed &otherfp)
{
    return this->_value < otherfp._value;
}

bool  Fixed::operator > (const Fixed &otherfp)
{
    return this->_value > otherfp._value;
}

bool  Fixed::operator <= (const Fixed &otherfp)
{
    return this->_value <= otherfp._value;
}

bool  Fixed::operator >= (const Fixed &otherfp)
{
    return this->_value >= otherfp._value;
}

bool  Fixed::operator == (const Fixed &otherfp)
{
    return this->_value == otherfp._value;
}

bool  Fixed::operator != (const Fixed &otherfp)
{
    return this->_value != otherfp._value;
}

Fixed  Fixed::operator + (const Fixed &otherfp)
{
    Fixed res;
    res._value = this->_value + otherfp._value;
    return res;
}

Fixed  Fixed::operator - (const Fixed &otherfp)
{
    Fixed res;

    res._value = this->_value - otherfp._value;
    return res;
}

Fixed   Fixed::operator * (const Fixed &otherfp)
{
    Fixed res;

    res._value = (this->_value * otherfp._value) / (pow(2, this->_fractional));
    return res;
}

Fixed   Fixed::operator / (const Fixed &otherfp)
{
    Fixed res;

    res._value = (this->_value / otherfp._value) * (pow(2, this->_fractional));
    return res;
}

Fixed   &Fixed::operator++(void)
{
    this->_value += 1;
    return *this;
}

Fixed   &Fixed::operator--(void)
{
    this->_value -= 1;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp = *this;

    (*this)._value--;
    return tmp;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp = *this;

    (*this)._value++;
    return tmp;
}

Fixed &Fixed::min(Fixed &fix1, Fixed &fix2)
{
    return fix1.getRawBits() > fix2.getRawBits() ? fix2 : fix1;
}

const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
    return fix1.getRawBits() > fix2.getRawBits() ? fix2 : fix1;
}

Fixed &Fixed::max(Fixed &fix1, Fixed &fix2)
{
    return fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2;
}

const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
    return fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2;
}
