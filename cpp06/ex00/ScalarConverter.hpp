#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <cstdlib>
# include <string>
# include <iostream>
# include <stdexcept>
# include <limits>
# include <cctype>

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter & copy);
		ScalarConverter & operator = (const ScalarConverter & copy);
		~ScalarConverter();
	public:
		static void	convert(std::string number);
};

#endif
