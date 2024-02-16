/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:57 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:48:17 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie * ZombieHorde(int n, std::string name)
{
	int	i = 0;

	Zombie *myhorde = new Zombie[n];;
	while(i < n)
	{
		myhorde[i].setName(name);
		i++;
	}
	return (myhorde);
}
