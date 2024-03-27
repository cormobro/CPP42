#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span
{
	private:
		unsigned int		_size;
		std::multiset<int>	_array;

	public:
		Span(void);
		Span(const unsigned int n);
		Span(Span & copy);
		Span & operator = (const Span & copy);
		~Span();
		void		addNumber(const int num);
		void		addNumbers();
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		unsigned int	getSize();
		unsigned int	getRealSize();
}

#endif
