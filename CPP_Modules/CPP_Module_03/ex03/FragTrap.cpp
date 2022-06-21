/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:17:04 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/28 19:03:55 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default Constructor called\n";
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap Constructor with parameter called\n";
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

FragTrap::FragTrap(FragTrap const &a) {
	std::cout << "FragTrap Copy Constructor called\n";
	_name = a._name;
	_hit = a._hit;
	_energy = a._energy;
	_attack = a._attack;
}

FragTrap& FragTrap::operator= (const FragTrap &a) {
	this->_name = a._name;
	this->_hit = a._hit;
	this->_energy = a._energy;
	this->_attack = a._attack;
	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->_name <<  " attack " << target;
	std::cout << ", causing " << this->_attack << " points of damage!";
	std::cout << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap high fives reques\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Deconstructor called\n";
}
