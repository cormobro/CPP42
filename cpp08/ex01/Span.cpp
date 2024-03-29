#include "Span.hpp"

Span::Span()
{
	this->_size = 0;
	std::cout << "Default constructor has been called for Span class" << std::endl;
}

Span::Span(unsigned int n)
{
	this->_size = n;
	std::cout << "Constructor has been called for Span class" << std::endl;
}

Span::Span(const Span & copy) : _array(copy._array)
{
	this->_size = copy.getSize();
	std::cout << "Copy constructor has been called for Span class" << std::endl;
}

Span & Span::operator = (const Span & copy)
{
	if (this != &copy)
	{
		this->_size = copy.getSize();
		this->_array.clear();
		this->_array = copy._array;
	}
	std::cout << "Operator overload constructor has been called for Span class" << std::endl;
	return (*this);
}

Span::~Span()
{
	this->_array.clear();
	std::cout << "Destructor has been called for Span class" << std::endl;
}

void	Span::addNumber(int num)
{
	if (this->_size <= this->getRealSize())
		throw std::out_of_range("The container is full");
	this->_array.insert(num);
}

template < typename T >
void	Span::addNumbers( const typename T::iterator& start, const typename T::iterator& end ) {
	if (std::distance(start, end) + this->_array.size() > this->_size)
		throw std::length_error( "Length is too long" );
	this->_array.insert(start, end);
}

long	Span::shortestSpan()
{
	if (this->getRealSize() < 2)
		throw std::logic_error("Shortest span needs atleast 2 numbers in the array");
	long	last = 0;
	long	res = std::numeric_limits<unsigned int>::max();
	for (std::multiset<int>::const_iterator iterator = this->_array.begin(); iterator != this->_array.end(); iterator++)
	{
		if (iterator != this->_array.begin() && std::abs(*iterator - last) < res)
			res = std::abs(*iterator - last);
		last = *iterator;
	}
	return (res);
}

long	Span::longestSpan()
{
	if (this->getRealSize() < 2)
		throw std::logic_error("Longest span needs atleast 2 numbers in the array");
	std::multiset<int>::const_iterator	max = std::max_element(this->_array.begin(), this->_array.end());
	std::multiset<int>::const_iterator	min = std::min_element(this->_array.begin(), this->_array.end());
	return (std::abs(static_cast<long>(*max) - static_cast<long>(*min)));
}

unsigned int	Span::getSize() const
{
	return (this->_size);
}

unsigned int	Span::getRealSize() const
{
	return (this->_array.size());
}

int	Span::getNumber(unsigned int pos) const
{
	std::multiset<int>::const_iterator iterator = this->_array.begin();
	if (this->_array.size() <= pos)
		throw std::out_of_range("Index is out of bound");
	for (unsigned int i = 0; i < this->_array.size(); i++)
	{
		if (pos == i)
			return (*iterator);
		iterator++;
	}
	return (0);
}

std::ostream & operator << (std::ostream& o, const Span& span)
{
		for (unsigned int i = 0; i < span.getRealSize(); i++)
		{
			o << span.getNumber(i);
			if (i + 1 < span.getSize())
				o << " ";
		}
		return (o);
}
