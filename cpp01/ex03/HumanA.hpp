/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:43:36 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:43:38 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
	private:
		Weapon		&_weapon;
		std::string	_name;

	public:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};

#endif
