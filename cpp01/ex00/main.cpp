#include "Zombie.hpp"

Zombie	* newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	randomChump("Thierry");
	Zombie *myzombie = newZombie("Marc");
	myzombie->announce();
	delete myzombie;
	return (0);
}
