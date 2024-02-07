#include "Zombie.hpp"

int	main()
{
	int	i = 0;
	Zombie *myhorde = ZombieHorde(10, "Thierry");
	while (i < 10)
	{
		myhorde[i].announce();
		i++;
	}
	delete [] myhorde;
	return (0);
}
