/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:47:43 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/29 13:40:34 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define  CONVERSION_HPP

# include <iostream>

class Conversion
{
	private:
		char	c;
		int		i;
		float	f;
		double	d;
	public:
		Conversion();
		Conversion(Conversion const &a);
		Conversion(std::string str);
		Conversion& operator= (Conversion const &a);
		~Conversion();

		char	getChar(void) const ;
		int		getInt(void) const ;
		float	getFloat(void) const ;
		double	getDouble(void) const ;

		void	to_Char(char c);
		void	to_Int(int	num);
		void	to_Float(float flt);
		void	to_Double(double dbl);

		std::string	CheckStr(std::string str);
};

#endif