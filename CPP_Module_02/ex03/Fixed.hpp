/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:33:34 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/19 10:37:00 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/* Includes */

# include <iostream>
# include <math.h>

/* Class */

class Fixed
{
	private:
		static const int	fract = 8;
		int				fixed_point;
	public:
		Fixed(const Fixed &a);
		Fixed(const int var);
		Fixed(const float var);
		Fixed();
		~Fixed();
		float	toFloat( void ) const;
		int		toInt( void ) const;
		Fixed& operator= (const Fixed& a);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		Fixed	operator+(const Fixed a);
		Fixed	operator-(const Fixed a);
		Fixed	operator*(const Fixed a);
		Fixed	operator/(const Fixed a);
		bool	operator!= (const Fixed a);
		bool	operator== (const Fixed a);
		bool	operator<= (const Fixed a);
		bool	operator>= (const Fixed a);
		bool	operator> (const Fixed a);
		bool	operator< (const Fixed a);
		Fixed	operator++ (int);
		Fixed	operator-- (int);
		Fixed	operator++ ();
		Fixed	operator-- ();
		static Fixed const &max(const Fixed &a, const Fixed &b);
		static Fixed const &min(const Fixed &a, const Fixed &b);
};

/* Functions */

std::ostream& operator<< (std::ostream& os, const Fixed& fixed);

#endif