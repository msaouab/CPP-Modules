/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:12 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/11 14:24:37 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

/* Includes */

# include <iostream>
# include <ostream>
# include "./Weapon.hpp"
# include "./HumanA.hpp"
# include "./HumanB.hpp"

/* Class */

class HumanA {
	private:
		Weapon		_club;
		std::string	_name;
	public:
		HumanA(std::string name, Weapon club);
		HumanA();
		~HumanA();
		void	attack(void);
};

#endif