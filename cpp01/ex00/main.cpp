#include "Zombie.hpp"

int	main()
{
	randomChump("Thierry");
	Zombie *myzombie = newZombie("Marc");
	myzombie->announce();
	delete myzombie;
	return (0);
}
