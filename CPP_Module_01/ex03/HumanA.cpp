/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:10 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 19:44:51 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"

HumanA::HumanA(std::string name, Weapon &club) :_club(club) {
	_name = name;
}


HumanA::~HumanA() {
}

void	HumanA::setWeapon(Weapon club) {
	this->_club = club;
}

Weapon	HumanA::getWeapon() const {
	return (_club);
}

void	HumanA::attack(void) {
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << getWeapon().getType();
	std::cout << std::endl;
}