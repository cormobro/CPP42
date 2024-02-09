/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:47:06 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/09 17:47:06 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_catBrain;
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
