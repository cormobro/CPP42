#include <string>
#include <iomanip>
#include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		Weapon(void);
		Weapon(const Weapon &copy);
		//~Weapon();
		void			setType(std::string newType);
		const std::string&	getType(void);

};
