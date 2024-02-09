#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_dogBrain;
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
