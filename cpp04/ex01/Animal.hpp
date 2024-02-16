/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:45:14 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:45:15 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	
	public:
		Animal(void);
		Animal(std::string name);
		Animal(Animal& copy);
		Animal& operator = (const Animal &copy);
		virtual ~Animal();
		virtual void	makeSound(void) const;
		virtual std::string getType(void) const;
};

#endif
