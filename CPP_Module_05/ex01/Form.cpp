/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:36:01 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/26 17:45:22 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form() : Name("Med"), isSigned(false), _GradeExecute(1), _GradeSign(1) {
	std::cout << "Form Default Constructor Called\n";
}

Form::Form(Form const &a) 
	: Name(a.Name), isSigned(a.isSigned), _GradeExecute(a._GradeExecute), _GradeSign(a._GradeSign) {
	std::cout << "Form Copy Constructor Called\n";
}

Form::Form(std::string const &name, unsigned int const &sign, unsigned int const &execute)
	: Name(name), isSigned(false), _GradeSign(sign), _GradeExecute(execute) {
	std::cout << "Form Constructor With Parameter Called\n";
	try {
        if (_GradeSign < low || _GradeExecute < low)
            throw Form::GradeTooHighException();
        else if (_GradeSign > heigh || _GradeExecute > heigh)
            throw Form::GradeTooLowException();
        else
            std::cout << "Form " + this->Name + " created" << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << "Form " + this->Name + " creation failed" << std::endl;
        throw;
    }
}

Form&	Form::operator= (Form const &a) {
	std::cout << "Form Copy Assignement Called\n";
	this->Name = a.Name;
	this->isSigned = a.isSigned;
	return (*this);
}

Form::~Form() {
	std::cout << "Form Destructor Called\n";
}

std::string	Form::getName() const {
	return (this->Name);
}

bool	Form::getSigned() const {
	return (this->isSigned);
}

unsigned int	Form::getGradesign() const {
	return (this->_GradeSign);
}

unsigned int	Form::getGradeExecute() const {
	return (this->_GradeExecute);
}

void	Form::beSigned(Bureaucrat &a) {
	if (this->_GradeSign < a.getGrade())
        throw Form::GradeTooHighException();
    this->isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Bureaucrat grade is too high to sign the form");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Bureaucrat grade is too low to sign the form");
}

std::ostream& operator<< (std::ostream& os, const Form& a) {
	os << a.getName() << ", Form sign grade " << a.getGradesign() << " with execute grade : " << a.getGradeExecute() << (a.getSigned() == true ? " signed" : " not Signed");
	return (os);
}
