/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:47:02 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:47:03 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor has been called for Cat" << std::endl;
	this->_type = "Cat";
	this->_catBrain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Constructor has been called for Cat of type " << type << std::endl;
	this->_type = type;
	this->_catBrain = new Brain();
}

Cat::Cat(Cat &copy) : Animal(copy)
{
	std::cout << "Copy constructor has been called for Cat of type " << copy._type << std::endl;
	this->_type = copy._type;
	this->_catBrain = new Brain();
	if (copy._catBrain)
		*(this->_catBrain) = *(copy._catBrain);
}

Cat&	Cat::operator = (const Cat &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for Cat of type " << copy._type << std::endl;
	this->_type = copy._type;
	this->_catBrain = new Brain();
	if (copy._catBrain)
		*(this->_catBrain) = *(copy._catBrain);
	return (*this);
}

Cat::~Cat()
{
	delete this->_catBrain;
	std::cout << "Destructor has been called for Cat of type " << this->_type << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat of type " << this->_type << " rawrs as your hand touches it." << std::endl;
}

std::string Cat::getType(void) const
{
	return ("Cat");
}
