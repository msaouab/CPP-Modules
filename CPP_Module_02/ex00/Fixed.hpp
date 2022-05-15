/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:25:19 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/14 19:08:18 by msaouab          ###   ########.fr       */
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
		static const int	fract;
		int					fixed_point;
	public:
		Fixed(const Fixed &a);
		Fixed();
		~Fixed();
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		Fixed& operator= (const Fixed& a);
};

/* Functions */

#endif