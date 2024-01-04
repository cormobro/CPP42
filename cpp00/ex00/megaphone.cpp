#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int	i;
	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++i])
		{
			for (size_t x = 0; x < strlen(argv[i]); x++)
				putchar(toupper(argv[i][x]));
		}
		std::cout << std::endl;
	}
	return (0);
}
