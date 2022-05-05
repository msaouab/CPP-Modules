/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:11:07 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/05 20:29:33 by msaouab          ###   ########.fr       */
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

int	main()
{
	PhoneBook	_Phonebook;
	t_data	data;
	std::string	_cmd;
	int		i;

	data.Old_index = 1;
	data.New_index = 1;
	i = 1;
	while (1)
	{
		if (i == 1)
			print_header();
		std::cout << "~ Enter your Command ➤ ";
		getline(std::cin, _cmd);
		if (!std::cin)
		{
			std::cout << std::endl << "Bad Command!!. try again" << std::endl;
			exit (0);
		}
		else if (_cmd == "ADD")
			_Phonebook.Add(&data, i);
		else if (_cmd == "SEARCH")
		{
			if (data._first.length() != 0)
				_Phonebook.Search(i);
			else
				std::cout << "Your Phonebook is empty!" << std::endl;
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
