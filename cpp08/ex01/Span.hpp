#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <set>
# include <limits>

class Span
{
	private:
		unsigned int		_size;
		std::multiset<int>	_array;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span & copy);
		Span & operator = (const Span & copy);
		~Span();
		void		addNumber(int num);
		template <typename T> void	addNumbers(const typename T::iterator& start, const typename T::iterator& end);
		long		shortestSpan();
		long		longestSpan();
		unsigned int	getSize() const;
		unsigned int	getRealSize() const;
		int		getNumber(unsigned int i) const;
};

std::ostream & operator << (std::ostream& o, const Span& span);

#endif
