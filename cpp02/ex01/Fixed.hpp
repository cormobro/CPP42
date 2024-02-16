/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:23:05 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/08 13:23:26 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int			_value;
		static const int	_fractional = 8;
	
	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(Fixed const &copy);
		Fixed& operator = (const Fixed &copy);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
};

std::ostream& operator << (std::ostream& os, const Fixed& point);

#endif
