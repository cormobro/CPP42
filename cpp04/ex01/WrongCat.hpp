#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(std::string name);
		WrongCat(WrongCat& copy);
		WrongCat& operator = (const WrongCat &copy);
		~WrongCat();
		void	makeSound() const;
		std::string getType(void) const;
};

#endif
