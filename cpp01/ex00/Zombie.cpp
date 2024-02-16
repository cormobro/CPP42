/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:41:16 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:41:29 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Destructor has been called for " << _name << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Constructor has been called for " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
