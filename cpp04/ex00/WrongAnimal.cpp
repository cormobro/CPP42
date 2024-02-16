/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:44:25 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:44:26 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor has been called for WrongAnimal" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Constructor has been called for WrongAnimal of type " << type << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	std::cout << "Copy constructor has been called for WrongAnimal of type " << copy._type << std::endl;
	this->_type = copy._type;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for WrongAnimal of type " << copy._type << std::endl;
	this->_type = copy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor has been called for WrongAnimal of type " << this->_type << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal of type " << this->_type << " makes a cute sound." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
