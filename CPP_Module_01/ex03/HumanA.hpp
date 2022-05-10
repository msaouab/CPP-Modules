/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:25:05 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/10 20:58:35 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

/* Header */

#include "./Weapon.hpp"
#include "./HumanB.hpp"

/* Class */

class HumanA
{
	private:
		/* data */
	public:
		Weapon	_Weapon;
		HumanA(std::string str, Weapon club);
		HumanA();
		~HumanA();
		void	attack();
};

#endif