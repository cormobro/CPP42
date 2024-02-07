#include "Weapon.hpp"

void	Weapon::setType(std::string newType)
{
	_type = newType;
}

const std::string&	Weapon::getType(void)
{
	const std::string	&res = this->_type;
	return (res);
}

Weapon::~Weapon()
{
	std::cout << "Weapon: " << _type << " has been destroyed." << std::endl;
}

Weapon::Weapon(const Weapon &copy)
{
	_type = copy._type;
}

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "Constructor has been called for weapon: " << type << std::endl;
}

Weapon::Weapon(void)
{
	std::cout << "Constructor has been called for a weapon" << std::endl;
}
