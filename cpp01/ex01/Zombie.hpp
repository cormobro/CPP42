#include <iostream>
#include <iomanip>
#include <string>

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
