#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat* k = new Cat();
	Cat* l = new Cat(*k);
	delete l;
	delete k;
	Dog	dog;
	Dog	doggy;
	doggy = dog;
	doggy.makeSound();
	dog.makeSound();
	const Animal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	int	count = -1;
	while (++count < 4)
		delete animals[count];
	delete j;//should not create a leak
	delete i;
	return (0);
}
