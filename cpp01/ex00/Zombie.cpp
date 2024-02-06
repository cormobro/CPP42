#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Destructor has been called for " << _name << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Constructor has been called for " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
