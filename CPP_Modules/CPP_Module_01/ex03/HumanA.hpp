/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:12 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 19:44:48 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

/* Includes */

# include <iostream>
# include <ostream>
# include "./Weapon.hpp"

/* Class */

class HumanA {
	private:
		Weapon		&_club;
		std::string	_name;
	public:
		HumanA(std::string name, Weapon &club);
		~HumanA();
		void	attack(void);
		void	setWeapon(Weapon club);
		Weapon	getWeapon() const;
};

#endif