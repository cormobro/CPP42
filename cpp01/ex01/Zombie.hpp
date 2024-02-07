#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie {
private:
	std::string	_name;

public:
	~Zombie();
	Zombie(std::string name);
	Zombie(void);
	void	announce(void);
	void	freeZombie(void);
	void	setName(std::string name);
};

Zombie * ZombieHorde(int n, std::string name);

#endif
