/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:37:53 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/05 13:22:21 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Span.hpp"

Span::Span() {
}

Span::Span(unsigned int n) : _N(n) {
}

Span::Span(Span const &a) {
	this->_N = a._N;
}

Span& Span::operator= (Span const &a) {
	if (this != &a) {
		_N = a._N;
		_vec = a._vec;
	}
	return (*this);
}

Span::~Span() {
}

void	Span::addNumber(unsigned int num) {
	if (this->_N == this->_vec.size())
		throw Span::NoSpaceLeft();
	else
		this->_vec.push_back(num);
}

unsigned int	Span::longestSpan() const {
	if (this->_vec.size() <= 1)
		throw Span::NoSpan();
	else
		return (*std::max_element(this->_vec.begin(), this->_vec.end()));
}

unsigned int		Span::shortestSpan() const {
	if (this->_vec.size() <= 1)
		throw NoSpan();
	else
		return (*std::min_element(this->_vec.begin(), this->_vec.end()));
}

const char* Span::NoSpan::what() const throw() {
	return ("SPANEXCEPTION: There are No Numbers Stored, or Only One!");
}

const char* Span::NoSpaceLeft::what() const throw() {
	return ("SPANEXCEPTION: No Space Left in Container !");
}
