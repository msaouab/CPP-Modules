/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:52:21 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/21 18:24:55 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "\033[0;33m" << "FragTrap Constructor called" << "\033[0m" << std::endl;
	this->_name = "msaouab";
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "\033[0;33m" << "FragTrap parametre Constructor called" << "\033[0m" << std::endl;
	this->_name = "msaouab";
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap& FragTrap::operator= (FragTrap const &a) {
	std::cout << "FragTrap Copy assignment called" << std::endl;
	this->_name = "msaouab";
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	return (*this);
}

FragTrap::FragTrap(FragTrap const &a) {
	std::cout << "\033[0;33m" << "FragTrap Copy Constructor called" << "\033[0m" << std::endl;
	if (this == &a)
		return ;
	*this = a;
}

// void	FragTrap::attack(const std::string& target) {
// 	std::cout << "ClapTrap " << this->_name <<  " attack " << target;
// 	std::cout << ", causing " << this->_attack << " points of damage!";
// 	std::cout << std::endl;
// }

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap high fives request." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\033[0;33m" << "FragTrap Deconstructor called" << "\033[0m" << std::endl;
}
