#include <string>
#include <iomanip>
#include <iostream>

int	main()
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string &stringREF = myString;

	//Memory address of string variable
	std::cout << &myString << std::endl;
	//Memory address of stringPTR
	std::cout << stringPTR << std::endl;
	//Memory address of stringREF;
	std::cout << &stringREF << std::endl;
	//Value of string variable
	std::cout << myString << std::endl;
	//Value pointed to by stringPTR
	std::cout << *stringPTR << std::endl;
	//Value pointed to by stringREF
	std::cout << stringREF << std::endl;
	return (0);
}
