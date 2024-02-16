/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:43:29 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:43:30 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name)
{
	std::cout << "HumanA " << _name << " has been constructed" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << _name << " has been destroyed" << std::endl;
}
