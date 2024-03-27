#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>
# include <array>
# include <deque>

template <typename T>
int easyfind(const T &array, const int value)
{
	typename T::const_iterator it;
	it = std::find(array.begin(), array.end(), value);
	if (it != array.end())
		return (it - array.begin());
	throw std::out_of_range("The value is not in the container");
}

#endif
