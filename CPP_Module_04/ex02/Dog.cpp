/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:35:27 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/02 14:51:44 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default Constructor Called\n";
	this->_type = "Dog";
}

Dog& Dog::operator= (Dog const &a) {
	std::cout << "Dog Assignement Operator Called\n";
	this->_type = a._type;
	return *this;
}

Dog::Dog(Dog const &a) {
	std::cout << "Dog Copy Constructor Called\n";
	this->_type = a._type;
}

void	Dog::setType(std::string type) {
	this->_type = type;
}

std::string	Dog::getType() const {
	return (_type);
}

Dog::~Dog() {
	std::cout << "Dog DeConstructor Called\n";
}

void	Dog::makeSound() const{
	std::cout << "Woef Woef\n";
}
