/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:09:37 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/21 17:15:28 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "./Form.hpp"
# include <fstream>

#define SCF_sign 25
#define SCF_exec 5


class ShrubberyCreationForm : public Form
{
	private:
		std::string const	_Target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &a);
		ShrubberyCreationForm& operator= (ShrubberyCreationForm const &a);
		~ShrubberyCreationForm();

		class FileCannotCreate : public std::exception
		{
			const char *what() const throw() ;
		};
		
		void	action() const ;
};

#endif