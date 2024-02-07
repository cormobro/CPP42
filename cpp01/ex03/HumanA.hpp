#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
	private:
		Weapon		&_weapon;
		std::string	_name;

	public:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};

#endif
