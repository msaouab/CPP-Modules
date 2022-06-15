/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:36:01 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/14 15:56:37 by msaouab          ###   ########.fr       */
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

Form::Form(std::string name, unsigned int sign, unsigned int execute)
	: Name(name), _GradeSign(sign), _GradeExecute(execute) {
	std::cout << "Form Constructor With Parameter Called\n";
	// try {
	// 	if (_GradeSign < low || _GradeExecute < low)
	// 		throw GradeTooHighException("the Grades entred for Form " + Name + " is too High, the range between 1-150.");
	// 	else if (_GradeSign < heigh || _GradeExecute < heigh)
	// 		throw GradeTooLowException("the Grade entred for " + _name + " is too low,  the range between 1-150.");
	// 	else
	// 		this->_grade = grade;
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << "Bureacrate " + _name + " Constructor failed" << std::endl;
	// 	throw;
	// }
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
        throw GradeTooLowException("Bureaucrat grade is too low to sign the form");
    this->isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException() {
	std::cout << "GradeTooHighException Default Constructor Called\n";
}

Form::GradeTooHighException::GradeTooHighException(std::string error) :errorMessage(error) {
	
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Form Grade too High, the range between 1 - 150.");
	return (errorMessage.c_str());
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
	std::cout << "GradeTooHighException Destructor Called\n";
}

Form::GradeTooLowException::GradeTooLowException() {
	std::cout << "GradeTooLowException Default Constructor Called\n";
}

Form::GradeTooLowException::GradeTooLowException(std::string error) :errorMessage(error) {
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Form Grade is too low, the range between 1 - 150.");
	return (errorMessage.c_str());
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
	std::cout << "GradeTooLowException Destructor Called\n";
}

std::ostream& operator<< (std::ostream& os, const Form& a) {
	os << a.getName() << ", Form sign grade " << a.getGradesign() << " with execute grade : " << a.getGradeExecute() << (a.getSigned() == true ? " signed" : " not Signed");
	return (os);
}