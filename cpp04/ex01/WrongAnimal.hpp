#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal& copy);
		WrongAnimal& operator = (const WrongAnimal &copy);
		~WrongAnimal();
		void	makeSound(void) const;
		std::string getType(void) const;
};

#endif
