#include "Zombie.hpp"

Zombie * newZombie(std::string name)
{
	Zombie * thezombie = new Zombie(name);
	return (thezombie);
}
