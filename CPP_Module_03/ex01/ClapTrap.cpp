/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:06:19 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/20 13:35:12 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "\033[0;32m" << "ClapTrap Constructor called" << "\033[0m" << std::endl;
	this->_name = "msaouab";
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	this->_name = "msaouab";
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &a) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = a._name;
	this->_hit = a._hit;
	this->_energy = a._energy;
	this->_attack = a._attack;
	return (*this);
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setHit(int hit) {
	this->_hit = hit;
}

void	ClapTrap::setEnergy(int energy) {
	this->_energy = energy;
}

void	ClapTrap::setAttack(int attack) {
	this->_attack = attack;
}

std::string	ClapTrap::getName() {
	return this->_name;
}

int	ClapTrap::getHit() {
	return this->_hit;
}

int	ClapTrap::getEnergy() {
	return this->_energy;
}

int	ClapTrap::getAttack() {
	return this->_attack;
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->_name <<  " attack " << target;
	std::cout << ", causing " << this->_attack << " points of damage!";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " take Amount " << amount;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " be repaired " << amount;
	std::cout << " points of damage!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[0;31m" << "ClapTrap Deconstructor called" << "\033[0m";
	std::cout << std::endl;
}
