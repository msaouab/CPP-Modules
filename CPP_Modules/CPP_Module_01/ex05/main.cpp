/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:21:15 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 16:03:22 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main()
{
	Harl	hrl;
	std::string	level;

	std::cout << "| DABUG == '1' | INFO == '2' | WARNING == '3' | ERROR == '4' |";
	std::cout << std::endl << "Choose what level you need: ";
	std::cin >> level;
	std::cout << std::endl;
	hrl.complain(level);
	std::cout << std::endl;
}