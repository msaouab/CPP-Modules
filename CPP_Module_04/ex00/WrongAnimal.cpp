/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:39:44 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/01 12:58:32 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default Constructor Called\n";
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal Constructor with parameter Called\n";
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &a) {
	std::cout << "WrongAnimal Copy Constructor Called\n";
	this->_type = a._type;
}

WrongAnimal& WrongAnimal::operator= (WrongAnimal const &a) {
	std::cout << "WrongAnimal Constructor with parameter Called\n";
	this->_type = a._type;
	return *this;
}

void	WrongAnimal::setType(std::string type) {
	this->_type = type;
}

std::string	WrongAnimal::getType(void) const {
	return this->_type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal DeConstructor Called\n";
}

void	WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal\n";
}
