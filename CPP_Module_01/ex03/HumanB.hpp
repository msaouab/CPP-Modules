/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:25:56 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/10 20:58:30 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

/* Header */

#include "./Weapon.hpp"
#include "./HumanA.hpp"

/* Class */

class HumanB
{
	private:
		/* data */
	public:
		Weapon	_Weapon;
		HumanB(std::string str);
		HumanB();
		~HumanB();
		void	attack();
		void		setWeapon(Weapon club);
};

#endif