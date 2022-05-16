/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:33:34 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/16 16:59:19 by msaouab          ###   ########.fr       */
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
};

std::ostream& operator<< (std::ostream& os, const Fixed& fixed);
/* Functions */

#endif