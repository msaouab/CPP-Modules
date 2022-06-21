/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:58:14 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/21 20:21:33 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define  INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"

class Intern
{
	private:
	public:
		Intern();
		Intern&	operator= (Intern const &a);
		Intern(Intern const &a);
		~Intern();
		Form	*makeForm(std::string const &name, std::string const &target);

		class FormNotFound : public std::exception
		{
			virtual const	char *what() const throw();
		};

		Form*	ShrubberyCreation( std::string target );
		Form*	RobotomyRequest( std::string target );
		Form*	PresidentialPardon( std::string target );
		Form*	makeForm( std::string Type, std::string target );
};

#endif