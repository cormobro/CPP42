/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:20:35 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 12:20:40 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default constructor has been called for ScavTrap" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attackdmg = 20;
	this->_name = "ScavTrap";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor has been called for " << this->_name << " ScavTrap" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attackdmg = 20;
	this->_name = name;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy._name)
{
	std::cout << "Copy constructor has been called for " << copy._name << " ScavTrap" << std::endl;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_attackdmg = copy._attackdmg;
	this->_name = copy._name;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for " << copy._name << " ScavTrap" << std::endl;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_attackdmg = copy._attackdmg;
	this->_name = copy._name;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitpoints > 0 && this->_energy > 0)
	{
		this->_energy -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdmg << " points of damage! It has " << this->_energy << " energy left." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " couldn't attack due to a lack of hitpoints or energy." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " activates its energy shield." << std::endl;
}
