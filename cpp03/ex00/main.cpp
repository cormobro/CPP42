#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob;
	ClapTrap	thierry("Thierry");
	thierry.attack("bob");
	thierry.beRepaired(2);
	thierry.takeDamage(10);
	thierry.takeDamage(3);
	thierry.takeDamage(1);
	thierry.attack("bob");
	thierry.beRepaired(2);
	return (0);
}
