/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:06:15 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/07 15:27:32 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"

int	main()
{
	PhoneBook	_Phone;
	std::string	line;
	int			count;
	int			i;

	i = 0;
	count = 0;
	print_header();
	while (1)
	{
		std::cout << "Enter Your Command ➤ ";
		getline(std::cin, line);
		if (!std::cin)
			exit_with_D();
		else if (line == "ADD")
		{
			count = _Phone.Add(i, count);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (line == "SEARCH")
			_Phone.Search(_Phone, count);
		else if (line == "EXIT")
			exit_with_D();
		else
			std::cout << "Sorry your command it's not Exist yet :)" << std::endl;
	}
}
