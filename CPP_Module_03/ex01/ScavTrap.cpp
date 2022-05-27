/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:17:04 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/23 12:28:11 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default Constructor called\n";
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Constructor with parameter called\n";
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(ScavTrap const &a) {
	std::cout << "ScavTrap Copy Constructor called\n";
	_name = a._name;
	_hit = a._hit;
	_energy = a._energy;
	_attack = a._attack;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &a) {
	this->_name = a._name;
	this->_hit = a._hit;
	this->_energy = a._energy;
	this->_attack = a._attack;
	return (*this);
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap in Gate Keeper mode now\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Deconstructor called\n";
}
