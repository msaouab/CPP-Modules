/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:34:17 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/25 11:53:38 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default Constructor called\n";
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap Constructor with Parameter called\n";
}

FragTrap::FragTrap(FragTrap const &a) {
	std::cout << "FragTrap Copy Constructor called\n";
}

FragTrap&	FragTrap::operator= (FragTrap const &a) {
	this->_name = a._name;
	this->_hit = a._hit;
	this->_energy = a._energy;
	this->_attack = a._attack;
	return (*this);
}

void	FragTrap::setname(std::string name) {
	this->_name = name;
}
void	FragTrap::sethit(int hit) {
	_hit = hit;
}
void	FragTrap::setenergy(int energy) {
	_energy = energy;
}
void	FragTrap::setattak(int attak) {
	_attack = attak;
}
std::string	FragTrap::getname() {
	return (_name);
}
int	FragTrap::gethit() {
	return (_hit);
}
int	FragTrap::getenergy() {
	return (_energy);
}
int	FragTrap::getattak() {
	return (_attack);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap high fives reques\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Deconstructor called\n";
}