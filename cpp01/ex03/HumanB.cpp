/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:43:57 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:43:58 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (_weapon == NULL)
		std::cout << _name << " has no weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB(std::string name): _weapon(NULL)
{
	_name = name;
	std::cout << "HumanB " << _name << " has been constructed" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << _name << " has been destroyed" << std::endl;
}
