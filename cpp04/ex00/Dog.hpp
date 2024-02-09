#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string name);
		Dog(Dog& copy);
		Dog& operator = (const Dog &copy);
		~Dog();
		void	makeSound() const;
		std::string getType(void) const;
};

#endif
