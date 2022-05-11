/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:16 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/11 14:20:20 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"

Weapon::Weapon(/* args */) {
}

Weapon::~Weapon() {
}

void	Weapon::setType(std::string type) {
	_type = type;
}

std::string	Weapon::getType(void) {
	return _type;
}
