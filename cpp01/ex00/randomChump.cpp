#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie myzombie(name);
	myzombie.announce();
}
