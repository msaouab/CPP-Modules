/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:47:41 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/29 13:51:02 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Conversion.hpp"

Conversion::Conversion() {
	std::cout << "Conversion Default Constructor Called\n";
}

Conversion::Conversion(const Conversion &a) {
	std::cout << "Conversion Copy Constructor Called\n";
}

Conversion::Conversion(std::string str) {
	std::cout << "Conversion Constructor With Parameter Called\n";
	CheckStr(str);
}

Conversion& Conversion::operator= (Conversion const &a) {
	this->c = a.c;
	this->i = a.i;
	this->d = a.d;
	this->f = a.f;
	return (*this);
}

Conversion::~Conversion() {
	std::cout << "Conversion Destructor Called\n";
}

char	Conversion::getChar(void) const {
	return (this->c);
}

int		Conversion::getInt(void) const {
	return (this->i);
}

float	Conversion::getFloat(void) const {
	return (this->f);
}

double	Conversion::getDouble(void) const {
	return (this->d);
}

void	Conversion::to_Char(char c) {
	std::cout << "\033[0;32m" << "char: " << c << "\n" << "\033[0m";
	int	num;
	
	num = (int)c;
	to_Int(num);
}

void	Conversion::to_Int(int num) {
	std::cout << "\033[0;32m" << "int: " << num << "\n" << "\033[0m";
	float	flt;

	flt = static_cast<float>(num);
	to_Float(flt);
}
void	Conversion::to_Float(float	flt) {
	std::cout << "\033[0;32m" << "float: " << flt << "\n" << "\033[0m";
}

void	Conversion::to_Double(double dbl) {
	std::cout << "\033[0;32m" << "Double: " << dbl << "\n" << "\033[0m";	
}

std::string	Conversion::CheckStr(std::string str) {
	std::cout << "\033[0;34m" << "I am string: " << str << ";\n" << "\033[0m";
	if (str.length() == 1 && isalpha(str[0]))
		to_Char(str[0]);
	return (str);
}