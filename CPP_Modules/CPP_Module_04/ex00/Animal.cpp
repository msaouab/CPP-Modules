/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:45:17 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/01 12:56:27 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Default Constructor Called\n";
}

Animal::Animal(std::string type) {
	std::cout << "Animal Constructor with parameter Called\n";
	this->_type = type;
}

Animal::Animal(Animal const &a) {
	std::cout << "Animal Copy Constructor Called\n";
	this->_type = a._type;
}

Animal& Animal::operator= (Animal const &a) {
	std::cout << "Animal Copy Assignement Called\n";
	this->_type = a._type;
	return *this;
}

void	Animal::setType(std::string type) {
	this->_type = type;
}

std::string	Animal::getType(void) const {
	return this->_type;
}

Animal::~Animal() {
	std::cout << "Animal DeConstructor Called\n";
}

void	Animal::makeSound() const{
	std::cout << "Animal\n";
}

