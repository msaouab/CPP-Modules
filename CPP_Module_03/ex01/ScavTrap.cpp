/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:37:31 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/21 14:38:17 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "\033[0;33m" << "ScavTrap Constructor called" << "\033[0m" << std::endl;
	this->_name = "msaouab";
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "\033[0;33m" << "ScavTrap parametre Constructor called" << "\033[0m" << std::endl;
	this->_name = "msaouab";
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap& ScavTrap::operator= (ScavTrap const &a) {
	std::cout << "ScavTrap Copy assignment called" << std::endl;
	this->_name = "msaouab";
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap const &a) {
	std::cout << "\033[0;33m" << "ScavTrap Copy Constructor called" << "\033[0m" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->_name <<  " attack " << target;
	std::cout << ", causing " << this->_attack << " points of damage!";
	std::cout << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[0;33m" << "ScavTrap Deconstructor called" << "\033[0m" << std::endl;
}
