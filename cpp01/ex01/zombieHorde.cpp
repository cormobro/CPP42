#include "Zombie.hpp"

Zombie * ZombieHorde(int n, std::string name)
{
	int	i = 0;

	Zombie *myhorde = new Zombie[n];;
	while(i < n)
	{
		myhorde[i].setName(name);
		i++;
	}
	return (myhorde);
}
