/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:22:02 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/07 15:28:10 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"
# include "./Contact.hpp"

void	print_header()
{
	std::cout << "/* ********************************** */" << std::endl;
	std::cout << "/*       Choose Your Command!         */" << std::endl;
	std::cout << "/* ADD: to enter a new Contact.       */" << std::endl;
	std::cout << "/* SEARCH: to check all your Contact. */" << std::endl;
	std::cout << "/* EXIT: to quit your Programme.      */" << std::endl;
	std::cout << "/* ********************************** */" << std::endl;
}

void	print_header_table()
{
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|   Index  | FirstName| LastName | NickName |" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
}

void	fill_table(std::string str)
{
	int	i;

	i = 0;
	if (str.length() < 10)
	{
		while (i < 10 - str.length())
		{
			std::cout << " ";
			i++;
		}
		std::cout << str << "|";
	}
	else
		std::cout << str.substr(0, 9) << "." << "|";
}

int	is_numbr(std::string str)
{
	int	i;

	i = 0;
	if (str == "")
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	get_result(PhoneBook phone, int count)
{
	std::string	index;
	int			num;

	while (1)
	{
		std::cout << "Choose Contact Index or enter 0 to back to Menu : ";
		getline(std::cin, index);
		if (is_numbr(index) == 0)
			std::cout << "Your index invalid!!" << std::endl;
		else
		{
			num = stoi(index);
			if (num >= 0 && num <= count)
			{
				if (num > 0)
					phone.showIndex(num - 1);
				num = 0;
				if (num == 0)
					break ;
			}
			else
				std::cout << "Your Contact Not Found." << std::endl;
		}
	}
}
