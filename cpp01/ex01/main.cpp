#include "Zombie.hpp"

Zombie * zombieHorde(int n, std::string name);

int	main()
{
	int	i = 0;
	Zombie *myhorde = zombieHorde(10, "Thierry");
	while (i < 10)
	{
		myhorde[i].announce();
		i++;
	}
	delete [] myhorde;
	return (0);
}
