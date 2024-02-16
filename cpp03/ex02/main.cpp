/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:21:19 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 12:21:46 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	claptrap("Thierry");
	ScavTrap	scavtrap("Patrick");
	FragTrap	fragtrap("Michel");

	std::cout << "+------------------------------------------+" << std::endl;
	claptrap.attack("Patrick");
	claptrap.takeDamage(3);
	claptrap.beRepaired(1);
	claptrap.attack("Michel");
	claptrap.takeDamage(13);
	claptrap.beRepaired(7);
	std::cout << "+------------------------------------------+" << std::endl;
	scavtrap.attack("Thierry");
	scavtrap.takeDamage(12);
	scavtrap.guardGate();
	std::cout << "+------------------------------------------+" << std::endl;
	fragtrap.attack("Patrick");
	fragtrap.takeDamage(99);
	fragtrap.highFivesGuys();
	fragtrap.beRepaired(99);
	fragtrap.takeDamage(100);
	std::cout << "+------------------------------------------+" << std::endl;
	return (0);
}
