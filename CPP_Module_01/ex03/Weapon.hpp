/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:18 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 19:47:56 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

/* Includes */
# include <iostream>
# include <ostream>

/* Class */

class Weapon {
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		void		setType(std::string type);
		std::string	getType(void) const ;
};

#endif