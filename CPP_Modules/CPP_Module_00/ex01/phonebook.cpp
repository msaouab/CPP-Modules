/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:51:13 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/07 14:36:10 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"

void	exit_with_D()
{
	std::cout << std::endl << " ==> See you later :)" << std::endl;
	exit (0);
}

int	PhoneBook::Add(int i, int count)
{
	std::string	_first;
	std::string	_last;
	std::string	_nick;
	std::string	_phone;
	std::string	_dark;

	std::cout << "First Name: ";
	getline(std::cin, _first);
	if (!std::cin)
		exit_with_D();
	std::cout << "Last Name: ";
	getline(std::cin, _last);
	if (!std::cin)
		exit_with_D();
	std::cout << "NickName Name: ";
	getline(std::cin, _nick);
	if (!std::cin)
		exit_with_D();
	std::cout << "PhoneNumber Name: ";
	getline(std::cin, _phone);
	if (!std::cin)
		exit_with_D();
	std::cout << "darkSet: ";
	getline(std::cin, _dark);
	if (!std::cin)
		exit_with_D();
	this->_Contact[i].setfirst(_first);
	this->_Contact[i].setlast(_last);
	this->_Contact[i].setnick(_nick);
	this->_Contact[i].setphone(_phone);
	this->_Contact[i].setdark(_dark);
	if (count < 8)
		count++;
	return (count);
}

void	PhoneBook::Search(PhoneBook phone, int count)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	int	i;

	print_header_table();
	if (count == 0)
	{
		std::cout << "|     You don't have any Contact yet!!.     |";
		std::cout << std::endl << " -------------------------------------------" << std::endl;
	}
	else
	{
		i = 0;
		while (i < count)
		{
			std::cout << "|         " << i + 1 << "|";
			first = this->_Contact[i].getfirst();
			fill_table(first);
			last = this->_Contact[i].getlast();
			fill_table(last);
			nick = this->_Contact[i].getnick();
			fill_table(nick);
			std::cout << std::endl << " -------------------------------------------" << std::endl;
			i++;
		}
		get_result(phone, count);
	}
}

void PhoneBook::showIndex(int index)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	dark;

	std::cout << " -----------------------------------------------------------------" << std::endl;
	std::cout << "|   Index  | FirstName| LastName | NickName |PhoneNumbr|  DarkSet |" << std::endl;
	std::cout << " -----------------------------------------------------------------" << std::endl;
	std::cout <<  "|         " << index + 1<< "|";
	first = this->_Contact[index].getfirst();
	fill_table(first);
	last = this->_Contact[index].getlast();
	fill_table(last);
	nick = this->_Contact[index].getnick();
	fill_table(nick);
	phone = this->_Contact[index].getphone();
	fill_table(phone);
	dark = this->_Contact[index].getdark();
	fill_table(dark);
	std::cout << std::endl << " -----------------------------------------------------------------" << std::endl;
}
