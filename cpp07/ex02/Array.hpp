#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> class Array {
	private:
		T*		_arr;
		unsigned int	_size;
 
	public:
		Array(void)
		{
			this->_arr = NULL;
			this->_size = 0;
		}
		Array(const unsigned int size)
		{
			this->_arr = new T[size];
			this->_size = size;
		}
		Array(Array& copy)
		{
			if (copy._arr != NULL)
			{
				this->_size = copy.size();
				this->_arr = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_arr[i] = copy._arr[i];
			}
			else
			{
				this->_arr = NULL;
				this->_size = 0;
			}
			std::cout << "Copy constructor has been called" << std::endl;
		}
		Array & operator = (const Array &copy)
		{
			if (this != &copy)
			{
				if (copy._arr != NULL)
				{
					this->_size = copy.size();
					this->_arr = new T[this->_size];
					for (unsigned int i = 0; i < this->_size; i++)
						this->_arr[i] = copy._arr[i];
				}
				else
				{
					this->_arr = NULL;
					this->_size = 0;
				}
			}
			return (*this);
		}
		~Array()
		{
			if (this->_size != 0)
				delete [] this->_arr;
		}
		T & operator [] (unsigned int i) const
		{
			if (i >= this->_size)
				throw std::out_of_range("Exception: Index is out of bound");
			return (this->_arr[i]);
		}
		unsigned int	size()
		{
			return (this->_size);
		}
};

#endif
