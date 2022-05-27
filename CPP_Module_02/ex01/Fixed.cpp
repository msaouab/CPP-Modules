/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:25:10 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/27 15:51:41 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const int var) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = var * (1 << this->raw);
}

Fixed::Fixed(const float var) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = (int)(roundf(var * (1 << this->raw)));
}

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed::operator= (const Fixed& a) {
	if (this != &a)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->fixed_point = a.getRawBits();
	}
	return (*this);
}

std::ostream& operator<< (std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}

void	Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
}

int	Fixed::getRawBits(void) const {
	return this->fixed_point;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixed_point / (float)(1 << this->raw));
}

int	Fixed::toInt(void) const {
	return (this->fixed_point / (1 << this->raw));
}
