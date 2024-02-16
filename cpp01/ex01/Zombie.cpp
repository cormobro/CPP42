/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:29 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:42:33 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	_name = "null";
	std::cout << "Constructor has been called for a random zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor has been called for " << _name << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Constructor has been called for " << name << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
