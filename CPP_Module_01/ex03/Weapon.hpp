/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:31:49 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/10 20:55:30 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

/* Header */

#include <iostream>

#include "./HumanA.hpp"
#include "./HumanB.hpp"

/* Class */

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string std);
		Weapon();
		~Weapon();
		void		setType(std::string type);
		std::string	getType(void);
};

#endif