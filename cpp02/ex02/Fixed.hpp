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
		bool	operator > (const Fixed &otherfp);
		bool	operator < (const Fixed &otherfp);
		bool	operator >= (const Fixed &otherfp);
		bool	operator <= (const Fixed &otherfp);
		bool	operator == (const Fixed &otherfp);
		bool	operator != (const Fixed &otherfp);
		Fixed	operator + (const Fixed &otherfp);
		Fixed	operator - (const Fixed &otherfp);
		Fixed	operator * (const Fixed &otherfp);
		Fixed	operator / (const Fixed &otherfp);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		Fixed	operator++(int);
		static	Fixed &min(Fixed &fix1, Fixed &fix2);
		static const Fixed &min(const Fixed &fix1, const Fixed &fix2);
		static	Fixed &max(Fixed &fix1, Fixed &fix2);
		static const Fixed &max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream& operator << (std::ostream& os, const Fixed& point);

#endif
