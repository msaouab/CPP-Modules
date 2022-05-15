/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:25:10 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/14 19:14:36 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	if (this == &a)
		return ;
	*this = a;
}

Fixed& Fixed::operator= (const Fixed& a) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = a.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
