/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:16 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 19:48:24 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::Weapon(/* args */) {
}

Weapon::~Weapon() {
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string	Weapon::getType(void) const{
	return _type;
}
