/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:45:43 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:45:44 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor has been called for Dog" << std::endl;
	this->_type = "Dog";
	this->_dogBrain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Constructor has been called for Dog of type " << type << std::endl;
	this->_type = type;
	this->_dogBrain = new Brain();
}

Dog::Dog(Dog &copy) : Animal(copy)
{
	std::cout << "Copy constructor has been called for Dog of type " << copy._type << std::endl;
	this->_type = copy._type;
	this->_dogBrain = new Brain();
	if (copy._dogBrain)
		*(this->_dogBrain) = *(copy._dogBrain);
}

Dog&	Dog::operator = (const Dog &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for Dog of type " << copy._type << std::endl;
	this->_type = copy._type;
	this->_dogBrain = new Brain();
	if (copy._dogBrain)
		*(this->_dogBrain) = *(copy._dogBrain);
	return (*this);
}

Dog::~Dog()
{
	delete this->_dogBrain;
	std::cout << "Destructor has been called for Dog of type " << this->_type << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog of type " << this->_type << " barks aggressively towards you." << std::endl;
}

std::string Dog::getType(void) const
{
	return ("Dog");
}
