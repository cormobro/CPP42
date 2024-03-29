#include "Array.hpp"

int main(int, char**)
{
	Array<int> numbers(10);
	int* a = new int[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		const int value = rand();
		numbers[i] = value;
		a[i] = value;
	}
	//Copy constructor
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}
	//copy overload operator
	{
		Array<int> tmp;
		tmp = numbers;
	}
	std::cout << "BEFORE MODIFICATIONS" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "numbers[" << i << "] --> " << numbers[i] << std::endl;
		std::cout << "a[" << i << "] --> " << a[i] << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	//Out of bound indexes
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		numbers[10] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		numbers[i] = rand();
	}
	std::cout << "AFTER MODIFICATIONS" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "numbers[" << i << "] --> " << numbers[i] << std::endl;
		std::cout << "a[" << i << "] --> " << a[i] << std::endl;
	}
	delete [] a;
	return 0;
}
