#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		unsigned int	_hitpoints;
		unsigned int	_energy;
		unsigned int	_attackdmg;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& copy);
		ClapTrap& operator = (const ClapTrap &copy);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
