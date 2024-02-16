/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:47:43 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:47:44 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default constructor has been called for WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "Constructor has been called for WrongCat of type " << type << std::endl;
	this->_type = type;
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "Copy constructor has been called for WrongCat of type " << copy._type << std::endl;
	this->_type = copy._type;
}

WrongCat&	WrongCat::operator = (const WrongCat &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for WrongCat of type " << copy._type << std::endl;
	this->_type = copy._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor has been called for WrongCat of type " << this->_type << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat of type " << this->_type << " rawrs as your hand touches it." << std::endl;
}

std::string WrongCat::getType(void) const
{
	return ("WrongCat");
}
