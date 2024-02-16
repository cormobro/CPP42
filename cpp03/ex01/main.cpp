/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:18:51 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 12:19:04 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap claptrap("Thierry");
	ScavTrap scavtrap("Patrick");

	claptrap.attack("Patrick");
	claptrap.takeDamage(3);
	claptrap.beRepaired(1);
	claptrap.attack("Patrick");
	claptrap.takeDamage(13);
	claptrap.beRepaired(7);
	scavtrap.attack("Thierry");
	scavtrap.takeDamage(12);
	scavtrap.guardGate();
	return (0);
}
