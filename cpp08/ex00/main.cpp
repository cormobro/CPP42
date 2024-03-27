#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 4; i++)
		vec.push_back((i + 1)*10);
	//Container should look like that: {10, 20, 30, 40}
	try
	{
		std::cout << easyfind(vec, 30) << std::endl;
		std::cout << easyfind(vec, 50) << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
