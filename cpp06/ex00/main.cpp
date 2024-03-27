#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		for (int i = 1; i < argc; i++)
		{
			std::string scalar = argv[i];
			ScalarConverter::convert(scalar);
		}
	}
	return (0);
}
