/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:35:53 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/15 13:41:39 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "./Bureaucrat.hpp"

# define true 1
# define false 0

class Bureaucrat;

class Form {
	private:
		std::string	Name;
		bool		isSigned;
		const unsigned int	_GradeSign;
		const unsigned int	_GradeExecute;
	public:
		Form();
		Form(Form const &a);
		Form(std::string const &name, unsigned int const &Sign, unsigned int const &Execute);
		Form& operator= (Form const &a);
		~Form();
		std::string	getName() const ;
		bool		getSigned() const ;
		unsigned int getGradesign() const ;
		unsigned int getGradeExecute() const ;
		void	beSigned(Bureaucrat &a);

		class GradeTooHighException : public std::exception {
			private:
				std::string	errorMessage;
			public:
				// GradeTooHighException();
				GradeTooHighException(std::string const &error);
				~GradeTooHighException() throw() ;

				const char *what() const throw() ;
		};

		class GradeTooLowException : public std::exception {
			private:
				std::string	errorMessage;
			public:
				// GradeTooLowException();
				GradeTooLowException(std::string const &error);
				~GradeTooLowException() throw() ;

				const char *what() const throw() ;
		};
};

std::ostream& operator<< (std::ostream& os, const Form& a);

#endif