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

std::string	Animal::getType(void) const
{
	return (this->_type);
}
