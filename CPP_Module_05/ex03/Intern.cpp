/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:58:16 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/21 20:22:44 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"

Intern::Intern() {
	std::cout << "Intern Default Constructor Called\n";
}

Intern&	Intern::operator= (Intern const &a) {
	std::cout << "Intern Copy Assinement Called\n";
	if (this == &a)
		return (*this);
	return (*this);
}

Intern::~Intern() {
	std::cout << "Intern Destructor Called\n" << std::endl;
}

const char* Intern::FormNotFound::what() const throw()
{
	return ("InterException: Form Not Found!");
}

Form*	Intern::ShrubberyCreation(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form* Intern::RobotomyRequest( std::string target ) {
	return (new RobotomyRequestForm(target));
}

Form* Intern::PresidentialPardon( std::string target ) {
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm( std::string Type, std::string target )
{
	std::string	Forms[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	Form* (Intern:: *form[]) (std::string target) = {
		form[0] = &Intern::ShrubberyCreation,
		form[1] = &Intern::RobotomyRequest,
		form[2] = &Intern::PresidentialPardon
	};
	for(int i = 0; i < 3; i++)
		if(Forms[i] == Type)
		{
			std::cout << "Intern creates " << Type << std::endl;
			return ((this->*form[i])(target));
		}
	throw Intern::FormNotFound();
}