/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:04:09 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/27 18:07:00 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "./Form.hpp"
#define heigh 150
#define low 1

class Form;

class Bureaucrat
{
	private:
		std::string	const	_name;
		unsigned int		_grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &a);
		Bureaucrat(std::string const name, unsigned int const grade);
		Bureaucrat& operator= (const Bureaucrat &a);
		~Bureaucrat();
		std::string const	getName() const;
		unsigned int const	getGrade() const;
		void	incrementGrade();
		void	decrementGade();
		void	signForm(Form &a);
		void	executeForm(Form const & form);
	
		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
};

std::ostream& operator<< (std::ostream& os, const Bureaucrat& a);

#endif