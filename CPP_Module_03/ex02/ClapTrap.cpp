/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:37:33 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/23 12:29:00 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Default Constructor called\n";
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap Constructor with parameter called\n";
	this->_name = name;
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::ClapTrap(ClapTrap const &a) {
	std::cout << "ClapTrap Copy Constructor called\n";
	_name = a._name;
	_hit = a._hit;
	_energy = a._energy;
	_attack = a._attack;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &a) {
	this->_name = a._name;
	this->_hit = a._hit;
	this->_energy = a._energy;
	this->_attack = a._attack;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->_name <<  "attack " << target;
	std::cout << ", causing " << this->_attack << "points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << "take Amount " << amount;
	std::cout << "points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << "be repaired " << amount;
	std::cout << "points of damage!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Deconstructor called\n";
}
