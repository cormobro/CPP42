#include "Span.hpp"

Span::Span()
{
	this->_size = 0;
	std::cout "Default constructor has been called for Span class" << std::endl;
}

Span::Span(const unsigned int n)
{
	this->_size = 0;
	std::cout << "Constructor has been called for Span class" << std::endl;
}

Span::Span(const Span & copy)
{
	this->_size = copy.getSize();
	this->_array = copy.array;
	std::cout << "Copy constructor has been called for Span class" << std::endl;
}

Span & Span::operator = (const Span & copy)
{
	this->_size = copy.getSize();
	this->_array.clear();
	this->_array = copy.array;
	std::cout << "Operator overload constructor has been called for Span class" << std::endl;
	return (*this);
}

Span::~Span()
{
	this->_array.clear();
	std::cout << "Destructor has been called for Span class" << std::endl;
}

void	Span::addNumber(const int num)
{
	if (this->_size <= this->_getRealSize)
		throw std::out_of_range("The container is full");
	this->_array.insert(num);
}

unsigned int	Span::getSize()
{
	return (this->_size);
}

unsigned int	Span::getRealSize()
{
	return (this->_array.size());
}
