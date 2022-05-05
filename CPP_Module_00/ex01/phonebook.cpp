/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:14:12 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/05 20:31:56 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./phonebook.hpp"
# include "Contact.hpp"

// void	

void	PhoneBook:: Add(t_data *data, int	i)
{
	std::cout << "First Name: ";
	getline(std::cin, data->_first);
	if (!std::cin) {
		std::cout << "\nSee you later :)\n";
		exit (0);
	}
	std::cout << "Last Name: ";
	getline(std::cin, data->_last);
	if (!std::cin) {
		std::cout << "\nSee you later :)\n";
		exit (0);
	}
	std::cout << "Nikname: ";
	getline(std::cin, data->_nick);
	if (!std::cin) {
		std::cout << "\nSee you later :)\n";
		exit (0);
	}
	while (1)
	{
		std::cout << "Phone Number: ";
		getline(std::cin, data->_phone);
		if (!std::cin) {
			std::cout << "\nSee you later :)\n";
			exit (0);
		}
		if (!ft_Number(data->_phone))
			std::cout << "Please enter a valid Phone number\n";
		else
			break ;
	}
	std::cout << "Darkest secret: ";
	getline(std::cin, data->_dark);
	if (!std::cin) {
		std::cout << "\nSee you later :)\n";
		exit (0);
	}
	if (data->Old_index == 8)
		data->Old_index = data->New_index;
	this->_Contact[data->Old_index].setFirst(data->_first);
	this->_Contact[data->Old_index].setLast(data->_last);
	this->_Contact[data->Old_index].setNick(data->_nick);
	this->_Contact[data->Old_index].setPhone(data->_phone);
	this->_Contact[data->Old_index].setDarkset(data->_dark);
	data->Old_index++;
}

void	printer(std::string str)
{
	std::string	sub;

	int	i;

	i = 0;
	if (str.length() < 10)
	{
		while (i < (10 - str.length()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << str;
	}
	else
	{
		sub = str.substr(0, 9);
		std::cout << sub << ".";
	}
	std::cout << "|";
}

void	fill_table(t_print *print, int i)
{
	std::cout << "|         " << i << "|";
	printer(print->_first);
	printer(print->_last);
	printer(print->_nick);
	printer(print->_phone);
	printer(print->_dark);
	std::cout << std::endl << " -----------------------------------------------------------------" << std::endl;
	std::cout <<std::endl;
}

void	PhoneBook::Search(int count)
{
	t_print	print;
	int	i;

	std::cout << " _________________________________________________________________" << std::endl;
	std::cout << "|" << "   Index  " << "|" << "First Name" << "|" << " Last Name" << "|" << " Nickname " << "|" << "   Phone  " << "|" << "  Darkset " << "|" <<std::endl;
	std::cout << " -----------------------------------------------------------------" << std::endl;
	i = 0;
	while (++i < count)
	{
		print._first = this->_Contact[i].getFirst();
		print._last = this->_Contact[i].getLast();
		print._nick = this->_Contact[i].getNick();
		print._phone = this->_Contact[i].getPhone();
		print._dark = this->_Contact[i].getDarkset();
		if (print._first.length() != 0)
			fill_table(&print, i);
	}
}
