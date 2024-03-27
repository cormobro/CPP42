#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> void iter(T *a, int length, void (*f)(T&))
{
	if (a)
	{
		for (int i = 0; i < length; i++)
		{
			(*f)(a[i]);
		}
	}
}

#endif
