#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor has been called for Cat" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Constructor has been called for Cat of type " << type << std::endl;
	this->_type = type;
}

Cat::Cat(Cat &copy) : Animal(copy)
{
	std::cout << "Copy constructor has been called for Cat of type " << copy._type << std::endl;
	this->_type = copy._type;
}

Cat&	Cat::operator = (const Cat &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for Cat of type " << copy._type << std::endl;
	this->_type = copy._type;
	return (*this);
}

Cat::~Cat()
{
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
