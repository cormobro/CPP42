#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
