#include "Serializer.hpp"
#include "Data.hpp"

int	main()
{
	Data		*ptr = new Data;
	int		num = 42;

	ptr = new Data;
	ptr->ptr = &num;
	ptr->i = num;
	ptr->c = num;
	std::cout << "Before" << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "ptr->ptr: " << ptr->ptr << std::endl;
	std::cout << "ptr->i: " << ptr->i << std::endl;
	std::cout << "ptr->c: " << ptr->c << std::endl;
	std::cout << "*(ptr->ptr): " << *(ptr->ptr) << std::endl;
	std::cout << std::endl;

	uintptr_t	otherptr = Serializer::serialize(ptr);
	Data		*newptr = Serializer::deserialize(otherptr);

	std::cout << "After" << std::endl;
	std::cout << "newptr: " << newptr << std::endl;
	std::cout << "newptr->ptr: " << newptr->ptr << std::endl;
	std::cout << "newptr->i: " << newptr->i << std::endl;
	std::cout << "newptr->c: " << newptr->c << std::endl;
	std::cout << "*(newptr->ptr): " << *(newptr->ptr) << std::endl;
	std::cout << std::endl;

	delete ptr;

	return (0);
}
