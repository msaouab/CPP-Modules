/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:04:16 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/05 11:09:22 by msaouab          ###   ########.fr       */
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
	try {
		if (grade < low)
			throw GradeTooHighException();
		else if (grade > heigh)
			throw GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch (const std::exception &e) {
		std::cerr << "Bureacrate " + _name + " Constructor failed" << std::endl;
		throw;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	std::cout << "GradeTooHighException Constructor Called\n" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat Grade too High, the range between 1 - 150.");
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
	std::cout << "GradeTooHighException Destructor Called\n" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	std::cout << "GradeTooLowException Constructor Called\n" << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat Grade is too low, the range between 1 - 150.");
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
	std::cout << "GradeTooLowException Destructor Dalled\n" << std::endl;
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

std::ostream& operator<< (std::ostream& os, const Bureaucrat& a) {
	os << a.getName() << ", bureaucrat grade " << a.getGrade();
	return (os);
}