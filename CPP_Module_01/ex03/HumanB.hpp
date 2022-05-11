/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:14 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/11 16:54:50 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

/* Includes */

# include <iostream>
# include <ostream>
# include "./Weapon.hpp"

/* Class */

class HumanB {
	private:
		Weapon		*_club;
		std::string	_name;
	public:
		HumanB(std::string name);
		HumanB();
		~HumanB();
		void	setWeapon(Weapon &club);
		Weapon*	getWeapon();
		void	attack(void);
};

#endif