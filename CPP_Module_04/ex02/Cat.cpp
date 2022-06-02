/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:59:42 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/02 14:52:32 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor Called\n";
	this->_type = "Cat";
}

Cat& Cat::operator= (Cat const &a) {
	std::cout << "Cat Assignement Operator Called\n";
	this->_type = a._type;
	return *this;
}

Cat::Cat(Cat const &a) {
	std::cout << "Cat Copy Constructor Called\n";
	this->_type = a._type;
}

void	Cat::setType(std::string type) {
	this->_type = type;
}

std::string	Cat::getType() const {
	return (_type);
}

Cat::~Cat() {
	std::cout << "Cat DeConstructor Called\n";
}

void	Cat::makeSound() const {
	std::cout << "Meow Meow\n";
}