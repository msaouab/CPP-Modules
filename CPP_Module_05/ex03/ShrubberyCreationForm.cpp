/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:14:44 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/21 17:17:21 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm Default Constructor Called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)
	: Form("ShrubberyCreationForm", SCF_sign, SCF_exec), _Target(target) {
	std::cout << "ShrubberyCreationForm Constructor With Parameter Called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a) 
	: Form(a), _Target(a._Target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm Destructor Called\n";
}

const char* ShrubberyCreationForm::FileCannotCreate::what() const throw()
{
	return ("ShrubberyCreationFormException: A Problem Happened While Creating The File");
}

void	ShrubberyCreationForm::action() const {
	std::ofstream TreeFile;

	TreeFile.open(_Target + "_shrubbery");

    if (!TreeFile.is_open() || TreeFile.bad())
		throw ShrubberyCreationForm::FileCannotCreate();
	TreeFile << "          .     .  .      #     .      .          .		\n";
	TreeFile << "     .       .      .     #       .           .			\n";
	TreeFile << "        .      .         ###            .      .      .	\n";
	TreeFile << "      .      .   '#:. .:##'##:. .:#'  .      .				\n";
	TreeFile << "          .      . '####'###'####'  .						\n";
	TreeFile << "       .     '#:.    .:#'###'#:.    .:#'  .        .      .\n";
	TreeFile << "  .             '#########'#########'        .        .	\n";
	TreeFile << "        .    '#:.  '####'###'####'  .:#'   .       .		\n";
	TreeFile << "     .     .  '#######''##'##''#######'                  .	\n";
	TreeFile << "                .'##'#####'#####'##'           .      .	\n";
	TreeFile << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .		\n";
	TreeFile << "      .     '#######'##'#####'##'#######'      .     .		\n";
	TreeFile << "    .    .     '#####''#######''#####'    .      .			\n";
	TreeFile << "            .     '      000      '    .     .				\n";
	TreeFile << "       .         .   .   000     .        .       .		\n";
	TreeFile << ".. .. ..................O000O........................ .....\n";
	TreeFile << "		       msaouab								\n";
	std::cout << _Target + "_shrubbery outfile created" << std::endl;
}