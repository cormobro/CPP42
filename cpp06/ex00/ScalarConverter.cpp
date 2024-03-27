#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter & copy)
{
	(void)copy;
	return ;
}

ScalarConverter & ScalarConverter::operator = (const ScalarConverter & copy)
{
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	return ;
}

std::string	isPrintChar(std::string number)
{
	int num;
	try
	{
		num = std::stoi(number);
	}
	catch (std::out_of_range &e)
	{
		return ("NANI?!");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return ("Nan");
	}
	char c = static_cast<char>(num);
	if (std::isprint(c) == 1)
		return (std::string("'") + c + std::string("'"));
	else
		return ("Non displayable");
}

std::string	isInt(std::string number)
{
	try
	{
		int num = std::stoi(number);
		return (std::to_string(num));
	}
	catch (...)
	{
		return ("Nan");
	}
}

std::string	isFloat(std::string number)
{
	try
	{
		float num = std::stof(number);
		return (std::to_string(num).substr(0, std::to_string(num).find('.') + 2) + "f");
	}
	catch (...)
	{
		return ("Nanf");
	}
}

std::string	isDouble(std::string number)
{
	try
	{
		double num = std::stod(number);
		return (std::to_string(num).substr(0, std::to_string(num).find('.') + 2));
	}
	catch (...)
	{
		return ("Nan");
	}
}

void	ScalarConverter::convert(std::string number)
{
	try
	{
		size_t num;
		std::stof(number, &num);
		if ((num != number.length() && num != number.length() - 1) || (num == number.length() - 1 && number[num] != 'f' && number[num] != 'F'))
		{
			std::cout << "Not a valid number" << std::endl;
			return ;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "Not a valid number" << std::endl;
		return ;
	}
	if (number.compare("nan") == 0 || number.compare("nanf") == 0 || number.compare("inf") == 0 || number.compare("inff") == 0 || number.compare("+inf") == 0 || number.compare("+inff") == 0 || number.compare("-inf") == 0 || number.compare("-inff") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (number.compare("nan") == 0 || number.compare("inf") == 0 || number.compare("+inf") == 0 || number.compare("-inf") == 0)
			std::cout << "float: " << number << "f" << std::endl;
		else
			std::cout << "float: " << number << std::endl;
		if (number.compare("nanf") == 0 || number.compare("inff") == 0 || number.compare("+inff") == 0 || number.compare("-inff") == 0)
			number.pop_back();
		std::cout << "double: " << number << std::endl;
		return ;
	}
	std::cout << "char: " << isPrintChar(number) << std::endl;
	std::cout << "int: " << isInt(number) << std::endl;
	std::cout << "float: " << isFloat(number) << std::endl;
	std::cout << "double: " << isDouble(number) << std::endl;
}
