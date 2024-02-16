/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:51 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:42:52 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	i = 0;
	Zombie *myhorde = ZombieHorde(10, "Thierry");
	while (i < 10)
	{
		myhorde[i].announce();
		i++;
	}
	delete [] myhorde;
	return (0);
}
