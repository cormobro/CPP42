/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:15:44 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 12:17:17 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob;
	ClapTrap	thierry("Thierry");
	thierry.attack("bob");
	thierry.beRepaired(2);
	thierry.takeDamage(10);
	thierry.takeDamage(3);
	thierry.takeDamage(1);
	thierry.attack("bob");
	thierry.beRepaired(2);
	bob.attack("Thierry");
	bob.beRepaired(10);
	bob.takeDamage(100);
	return (0);
}
