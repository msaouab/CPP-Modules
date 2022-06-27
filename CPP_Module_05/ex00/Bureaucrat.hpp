/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:04:09 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/27 14:06:44 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

#define heigh 150
#define low 1

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, unsigned int const grade);
		Bureaucrat(Bureaucrat const &a);
		Bureaucrat& operator= (const Bureaucrat &a);
		~Bureaucrat();
		std::string const	getName() const;
		unsigned int const	getGrade() const;
		void	incrementGrade();
		void	decrementGade();

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream& operator<< (std::ostream& os, const Bureaucrat& a);

#endif