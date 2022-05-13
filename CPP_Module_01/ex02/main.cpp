/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:02:39 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 19:02:30 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
		/* ... */
	std::cout << &str << '\n';
	std::cout << &(*stringPTR) << '\n';
	std::cout << &stringREF << '\n';
		/* ... */
	std::cout << str << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
}
