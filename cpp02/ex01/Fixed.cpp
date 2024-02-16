/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:22:59 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/08 13:23:23 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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
