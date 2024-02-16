/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:43:28 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:43:30 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor has been called for Animal" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(std::string type)
{
	std::cout << "Constructor has been called for Animal of type " << type << std::endl;
	this->_type = type;
}

Animal::Animal(Animal &copy)
{
	std::cout << "Copy constructor has been called for Animal of type " << copy._type << std::endl;
	this->_type = copy._type;
}

Animal&	Animal::operator = (const Animal &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for Animal of type " << copy._type << std::endl;
	this->_type = copy._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor has been called for Animal of type " << this->_type << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal of type " << this->_type << " makes a cute sound." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
