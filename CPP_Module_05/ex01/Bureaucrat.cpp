/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:04:16 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/27 14:09:42 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :_grade(1) {
	std::cout << "Bureaucrat Default Constructor Called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &a) {
	std::cout << "Bureaucrat Copy Constructor Called\n";
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat &a) {
	std::cout << "Bureaucrat Copy Assinement Called\n";
	this->_grade = a._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int const grade) : _name(name) {
	std::cout << "Bureaucrat Constructor With Parameter Called\n";
	if (grade < low)
		throw GradeTooLowException();
	else if (grade > heigh)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat Grade too High, the range between 1 - 150.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat Grade is too low, the range between 1 - 150.");
}

std::string const	Bureaucrat::getName() const {
	return (this->_name);
}

unsigned int const	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::incrementGrade() {
	if (this->_grade == low)
        throw GradeTooHighException();
    std::cout << "Bureaucrat " << _name << " is incremented" << std::endl;
    this->_grade++;
}
void	Bureaucrat::decrementGade() {
	if (this->_grade == heigh)
        throw GradeTooLowException();
    std::cout << "Bureaucrat " << _name << " is decremented" << std::endl;
    this->_grade--;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Destructor Called\n";
}

void	Bureaucrat::signForm(Form &a) {
	try {
		a.beSigned(*this);
		std::cout << this->_name << " sign " << a.getName() << "\n";
	}
	catch (const std::exception &e) {
		std::cout << this->_name << " could not sign " << a.getName() << " because " << e.what() << ".\n";
	}
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& a) {
	os << a.getName() << ", bureaucrat grade " << a.getGrade();
	return (os);
}
