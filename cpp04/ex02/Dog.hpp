/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:47:19 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:47:21 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_dogBrain;
	public:
		Dog(void);
		Dog(std::string name);
		Dog(Dog& copy);
		Dog& operator = (const Dog &copy);
		~Dog();
		void	makeSound() const;
		std::string getType(void) const;
};

#endif
