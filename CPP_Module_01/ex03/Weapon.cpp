/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:16 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/11 16:59:14 by msaouab          ###   ########.fr       */
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

std::string	Weapon::getType(void) {
	return _type;
}
