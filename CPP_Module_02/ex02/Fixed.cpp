/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:25:10 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/18 14:42:49 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->fixed_point = 0;
}

Fixed::Fixed(const int var) {
	this->fixed_point = var * (1 << this->fract);
}

Fixed::Fixed(const float var) {
	this->fixed_point = roundf((var * (1 << this->fract)));
}

Fixed::Fixed(const Fixed &a) {
	*this = a;
}

Fixed& Fixed::operator= (const Fixed& a) {
	if (this != &a)
		this->fixed_point = a.fixed_point;
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
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixed_point / (1 << this->fract));
}

int	Fixed::toInt(void) const {
	return ((int)(this->fixed_point >> this->fract));
}


Fixed Fixed::operator+(const Fixed a) {
	Fixed	b;

	b.setRawBits((this->fixed_point + a.fixed_point) >> this->fract);
	return (b);
}

Fixed Fixed::operator-(const Fixed a) {
	Fixed	b;

	b.setRawBits((this->fixed_point - a.fixed_point) >> this->fract);
	return (b);
}

Fixed Fixed::operator*(const Fixed a) {
	Fixed	b;

	b.setRawBits((this->fixed_point * a.fixed_point) >> this->fract);
	return (b);
}

Fixed Fixed::operator/(const Fixed a) {
	Fixed	b;

	b.setRawBits((this->fixed_point / a.fixed_point) >> this->fract);
	return (b);
}

bool Fixed::operator!= (const Fixed a){
	if (this->fixed_point != a.fixed_point)
		return true;
	return false;
}

bool Fixed::operator== (const Fixed a) {
	if (this->fixed_point == a.fixed_point)
	    return true;
	return false;
}

bool	Fixed::operator<= (const Fixed a) {
	if (this->fixed_point < a.fixed_point || this->fixed_point == a.fixed_point)
		return true;
	return false;
}

bool	Fixed::operator>= (const Fixed a) {
	if (this->fixed_point > a.fixed_point || this->fixed_point == a.fixed_point)
		return true;
	return false;
}

bool	Fixed::operator> (const Fixed a) {
	if (this->fixed_point > a.fixed_point)
		return true;
	return false;
}

bool	Fixed::operator< (const Fixed a) {
	if (this->fixed_point < a.fixed_point)
		return true;
	return false;
}

Fixed	Fixed::operator++ (int) {
	Fixed	b;

	b.fixed_point = fixed_point++;
	return (b);
}

Fixed	Fixed::operator-- (int) {
	Fixed	b;

	b.fixed_point = fixed_point--;
	return (b);
}

Fixed	Fixed::operator++ () {
	Fixed	b;

	b.fixed_point = ++fixed_point;
	return (b);
}

Fixed	Fixed::operator-- () {
	Fixed	b;

	b.fixed_point = --fixed_point;
	return (b);
}

const  Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.fixed_point >= b.fixed_point)
		return (a);
	return b;
}

const  Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.fixed_point <= b.fixed_point)
		return (a);
	return b;
}