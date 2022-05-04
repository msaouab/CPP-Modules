/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:11:07 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/04 19:38:23 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "phonebook.hpp"

bool	ft_Number(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

void	PhoneBook:: add()
{
	std::string	_Var;

	std::cout << "First Name: ";
	getline(std::cin, _Var);
	if (!std::cin) {
		std::cout << "\nSee you later :)\n";
		exit (0);
	}
	this->_Contact[0].setFirst(_Var);
	std::cout << this->_Contact[0].getFirst() << std::endl;
	std::cout << "Last Name: ";
	getline(std::cin, _Var);
	if (!std::cin) {
		std::cout << "\nSee you later :)\n";
		exit (0);
	}
	this->_Contact[0].setLast(_Var);
	std::cout << this->_Contact[0].getLast() << std::endl;
	std::cout << "Nikname: ";
	getline(std::cin, _Var);
	if (!std::cin) {
		std::cout << "\nSee you later :)\n";
		exit (0);
	}
	this->_Contact[0].setNick(_Var);
	std::cout << this->_Contact[0].getNick() << std::endl;
	while (1)
	{
		std::cout << "Phone Number: ";
		getline(std::cin, _Var);
		if (!std::cin) {
			std::cout << "\nSee you later :)\n";
			exit (0);
		}
		if (!ft_Number(_Var))
			std::cout << "Please enter a valid Phone number\n";
		else
			break ;
	}
	this->_Contact[0].setDarkset(_Var);
	std::cout << this->_Contact[0].getDarkset() << std::endl;
	std::cout << "Darkest secret: ";
	getline(std::cin, _Var);
	if (!std::cin) {
		std::cout << "\nSee you later :)\n";
		exit (0);
	}
	this->_Contact[0].setPhone(_Var);
	std::cout << this->_Contact[0].getPhone() << std::endl;
}

int	main()
{
	PhoneBook	_Phonebook;
	std::string	_cmd;
	int		i;

	i = 0;
	while (1)
	{
		if (i == 0)
			print_header();
		std::cout << "~ Enter your Command ==> ";
		getline(std::cin, _cmd);
		if (!std::cin)
		{
			std::cout << std::endl << "Bad Command!!. try again" << std::endl;
			exit (0);
		}
		else if (_cmd == "ADD")
		{
			_Phonebook.add();
		}
		else if (_cmd == "SEARCH")
		{
			std::cout << "SEARCH :)" << std::endl;
			// exit (0);
		}
		else if (_cmd == "EXIT")
		{
			std::cout << "See you later :)" << std::endl;
			exit (0);
		}
		else if (_cmd.length() > 0)
			std::cout << _cmd << ": Your Command Not Exist!, `please try again`." << std::endl;
		i++;
	}
}
