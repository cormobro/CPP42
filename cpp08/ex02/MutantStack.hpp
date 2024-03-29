#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T> class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>()
		{
		};
		MutantStack(const MutantStack & copy) : std::stack<T>(copy)
		{
		};
		MutantStack & operator = (const MutantStack & copy)
		{
			return (std::stack<T>::operator=(copy));
		};
		~MutantStack()
		{
		};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{
			return (this->c.begin());
		};
		iterator	end()
		{
			return (this->c.end());
		}
};

#endif
