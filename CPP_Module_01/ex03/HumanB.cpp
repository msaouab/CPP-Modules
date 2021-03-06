/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:15 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/11 17:05:11 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanB.hpp"
#include "./HumanA.hpp"

HumanB::HumanB() {
}

HumanB::~HumanB() {
}

HumanB::HumanB(std::string name) {
	_name = name;
}

void	HumanB::setWeapon(Weapon &club) {
	this->_club = &club;
}

Weapon*	HumanB::getWeapon(void) {
	return _club;
}

void	HumanB::attack(void) {
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << getWeapon()->getType();
	std::cout << std::endl;
}