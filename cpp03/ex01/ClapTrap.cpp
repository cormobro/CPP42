#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor has been called for ClapTrap" << std::endl;
	this->_name = "ClapTrap";
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_attackdmg = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor has been called for " << name << " ClapTrap" << std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_attackdmg = 10;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	std::cout << "Copy constructor has been called for " << copy._name << " ClapTrap" << std::endl;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_attackdmg = copy._attackdmg;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for " << copy.__name << " ClapTrap" << std::endl;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_attackdmg = copy._attackdmg;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap has been destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitpoints > 0 && this->_energy > 0)
	{
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdmg << " points of damage! It has " << this->_energy << " energy left." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " couldn't attack due to a lack of hitpoints or energy." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints >= amount && this->_hitpoints != 0)
	{
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage points" << std::endl;
	}
	else if (this->_hitpoints != 0)
	{
		this->_hitpoints = 0;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage points" << std::endl;
	}
	if (this->_hitpoints == 0)
		std::cout << "ClapTrap " << this->_name << " has been defeated" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " has " << this->_hitpoints << " hitpoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints > 0 && this->_energy > 0)
	{
		this->_hitpoints += amount;
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->_name << " has repaired itself for " << amount << " hitpoints, it now has " << this->_hitpoints << " hitpoints" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " couldn't repair itself due to a lack of hitpoints or energy" << std::endl;
}
