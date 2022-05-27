/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:25:19 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/26 12:09:40 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/* Includes */

# include <iostream>

/* Class */

class Fixed
{
	private:
		static const int	raw = 8;
		int					fixed_point;
	public:
		Fixed();
		Fixed(const Fixed &a);
		Fixed& operator= (const Fixed& a);
		~Fixed();
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

/* Functions */

#endif