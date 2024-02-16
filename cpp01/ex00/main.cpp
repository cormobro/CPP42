/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:41:52 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:41:55 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	randomChump("Thierry");
	Zombie *myzombie = newZombie("Marc");
	myzombie->announce();
	delete myzombie;
	return (0);
}
