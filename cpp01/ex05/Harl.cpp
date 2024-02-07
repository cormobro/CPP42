#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Constructor has been called for Harl" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl has been destroyed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	myfuncstr[4] = {"INFO", "DEBUG", "WARNING", "ERROR"};
	Harl::ptr	myfunctions[4] = {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};
	int	i = 0;
	while (i < 4)
	{
		if (level == myfuncstr[i])
		{
			Harl::ptr myptr = myfunctions[i];
			(this->*myptr)();
			break ;
		}
		i++;
	}
}
