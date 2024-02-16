/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:22:21 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/08 13:22:23 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
