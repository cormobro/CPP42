/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:43 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:42:44 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie {
private:
	std::string	_name;

public:
	~Zombie();
	Zombie(std::string name);
	Zombie(void);
	void	announce(void);
	void	freeZombie(void);
	void	setName(std::string name);
};

Zombie * ZombieHorde(int n, std::string name);

#endif
