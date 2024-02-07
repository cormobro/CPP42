#include <string>
#include <iostream>
#include <fstream>

void	replace(std::string name, std::string s1, std::string s2, std::string stack)
{
	int	i;
	std::string	OutputName(name);
	OutputName += ".replace";
	std::ofstream	OutputFile(OutputName);

	i = 0;
	while (true && s1 != "")
	{
		i = stack.find(s1, i);
		if (i < 0)
			break ;
		stack.erase(i, s1.length());
		stack.insert(i, s2);
	}
	if (OutputFile.is_open())
	{
		OutputFile << stack;
		OutputFile.close();
	}
	else
	{
		std::cout << "Failed to open file 2" << std::endl;
	}
}

int	main(int argc, const char * argv[])
{
	if (argc != 4)
	{
		std::cout << "Not enough arguments" << std::endl;
		return (0);
	}
	std::ifstream	InputFile(argv[1]);
	if (InputFile.is_open())
	{
		std::string	line;
		std::string	stack;
		while (std::getline(InputFile, line))
		{
			stack += line;
			stack += '\n';
		}
		InputFile.close();
		replace(argv[1], argv[2], argv[3], stack);
	}
	else
	{
		std::cout << "Failed to open file 1" << std::endl;
	}
	return (0);
}
