/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:29:04 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/28 19:16:33 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default Constructor Called\n";
	this->_name = "monster";
    ClapTrap::_name = DiamondTrap::_name + "_clapname";
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &a) {
	std::cout << "DiamondTrap Copy Constructor Called\n";
	if (this == &a)
		return ;
	*this = a;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap Constructor with paramater Called\n";
	this->_name = name;
    ClapTrap::_name = DiamondTrap::_name + "_clap_name";
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
}

DiamondTrap	&DiamondTrap::operator= (DiamondTrap const &a) {
	this->_name = a._name;
	this->_hit = a._hit;
	this->_energy = a._energy;
	this->_attack = a._attack;
	return (*this);
}

void	DiamondTrap::whoAmI() {
	std::cout << "i am " << _name << " and name of ClapTrap is ";
	std::cout << ClapTrap::_name << "\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Deconstructor Called\n";
}