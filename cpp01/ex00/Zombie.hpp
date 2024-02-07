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
	void	announce(void);
	void	freeZombie(void);
};

Zombie	* newZombie(std::string name);
void	randomChump(std::string name);

#endif
