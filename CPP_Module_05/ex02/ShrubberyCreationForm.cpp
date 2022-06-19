/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:14:44 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/19 16:25:10 by msaouab          ###   ########.fr       */
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

void	ShrubberyCreationForm::action() const {
	std::ofstream file;

	file.open(_target + "_shrubbery");

    if (file.good())
    {
		file << "		        _{\ _{\{\/}/}/}__				\n";
		file << "             {/{/\}{/{/\}(\}{/\} _				\n";
		file << "            {/{/\}{/{/\}(_)\}{/{/\}  _			\n";
		file << "         {\{/(\}\}{/{/\}\}{/){/\}\} /\}		\n";
		file << "        {/{/(_)/}{\{/)\}{\(_){/}/}/}/}			\n";
		file << "       _{\{/{/{\{/{/(_)/}/}/}{\(/}/}/}			\n";
		file << "      {/{/{\{\{\(/}{\{\/}/}{\}(_){\/}\}		\n";
		file << "      _{\{/{\{/(_)\}/}{/{/{/\}\})\}{/\}		\n";
		file << "     {/{/{\{\(/}{/{\{\{\/})/}{\(_)/}/}\}		\n";
		file << "      {\{\/}(_){\{\{\/}/}(_){\/}{\/}/})/}		\n";
		file << "       {/{\{\/}{/{\{\{\/}/}{\{\/}/}\}(_)		\n";
		file << "      {/{\{\/}{/){\{\{\/}/}{\{\(/}/}\}/}		\n";
		file << "       {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\}		\n";
		file << "         {/({/{\{/{\{\/}(_){\/}/}\}/}(\}		\n";
		file << "          (_){/{\/}{\{\/}/}{\{\)/}/}(_)		\n";
		file << "            {/{/{\{\/}{/{\{\{\(_)/}			\n";
		file << "             {/{\{\{\/}/}{\{\\}/}				\n";
		file << "              {){/ {\/}{\/} \}\}				\n";
		file << "              (_)  \.-'.-/						\n";
		file << "          __...--- |'-.-'| --...__				\n";
		file << "   _...--"   .-'   |'-.-'|  ' -.  ""--..__		\n";
		file << " -"    ' .  . '    |.'-._| '  . .  '   jro		\n";
		file << " .  '-  '    .--'  | '-.'|    .  '  . '		\n";
		file << "          ' ..     |'-_.-|						\n";
		file << "  .  '  .       _.-|-._ -|-._  .  '  .			\n";
		file << "              .'   |'- .-|   '.				\n";
		file << "  ..-'   ' .  '.   `-._.-�   .'  '  - .		\n";
		file << "   .-' '        '-._______.-'     '  .			\n";
		file << "        .      ~,								\n";
		file << "    .       .   |\   .    ' '-.				\n";
		file << "    ___________/  \____________				\n";
		file << "   /  Practice, & Practice, &  \				\n";
		file << "  |     Practice, makes what    |				\n";
		file << "  |       makes improvement     |				\n";
		file << "  |    'Med Saouab' 'msaouab'   |				\n";
		file << "   \___________________________/				\n";
        file.close();
        std::cout << _target + "_shrubbery file created" << std::endl;
    }
}