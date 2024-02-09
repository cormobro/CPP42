/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:44:00 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:44:03 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string name);
		Cat(Cat& copy);
		Cat& operator = (const Cat &copy);
		~Cat();
		void	makeSound() const;
		std::string getType(void) const;
};

#endif
