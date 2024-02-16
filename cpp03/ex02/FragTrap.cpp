/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:20:12 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 12:20:46 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default constructor has been called for FragTrap" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackdmg = 30;
	this->_name = "FragTrap";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor has been called for " << this->_name << " FragTrap" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackdmg = 30;
	this->_name = name;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy._name)
{
	std::cout << "Copy constructor has been called for " << copy._name << " FragTrap" << std::endl;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_attackdmg = copy._attackdmg;
	this->_name = copy._name;
}

FragTrap&	FragTrap::operator = (const FragTrap &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for " << copy._name << " FragTrap" << std::endl;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_attackdmg = copy._attackdmg;
	this->_name = copy._name;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor has been called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " jumps up for a high five!" << std::endl;
}
