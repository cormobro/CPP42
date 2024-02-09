#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor has been called for Dog" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Constructor has been called for Dog of type " << type << std::endl;
	this->_type = type;
}

Dog::Dog(Dog &copy) : Animal(copy)
{
	std::cout << "Copy constructor has been called for Dog of type " << copy._type << std::endl;
	this->_type = copy._type;
}

Dog&	Dog::operator = (const Dog &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for Dog of type " << copy._type << std::endl;
	this->_type = copy._type;
	return (*this);
}

Dog::~Dog()
{
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
