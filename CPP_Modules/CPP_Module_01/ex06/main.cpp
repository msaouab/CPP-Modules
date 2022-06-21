/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:21:15 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 18:30:42 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main(int ac, char **av)
{
	Harl	hrl;
	std::string	level;

	if (ac == 2)
		hrl.complain(av[1]);
	else
		std::cout << "[ you don't have any input ]" << std::endl;
}