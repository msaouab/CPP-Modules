/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:34:10 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/11 14:28:21 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"

HumanA::HumanA() {
}

HumanA::~HumanA() {
}

HumanA::HumanA(std::string name, Weapon club) {
	_name = name;
	_club = club;
}

void	HumanB::attack(void) {
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << club;
	std::cout << std::endl;
}