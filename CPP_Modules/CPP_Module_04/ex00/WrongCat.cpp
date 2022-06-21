/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:39:42 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/30 13:21:36 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Default Constructor Called\n";
	this->_type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat DeConstructor Called\n";
}

WrongCat& WrongCat::operator= (WrongCat const &a) {
	std::cout << "WrongCat Assignement Operator Called\n";
	this->_type = a._type;
	return *this;
}

WrongCat::WrongCat(WrongCat const &a) {
	std::cout << "WrongCat Copy Constructor Called\n";
	this->_type = a._type;
}

void	WrongCat::setType(std::string type) {
	this->_type = type;
}

std::string	WrongCat::getType() const {
	return (_type);
}

void	WrongCat::makeSound() const {
	std::cout << "Meow Meow\n";
}