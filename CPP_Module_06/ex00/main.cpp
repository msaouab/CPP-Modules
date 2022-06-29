/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:47:33 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/28 17:18:53 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Conversion.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
		Conversion	number(av[1]);
	else
		std::cout << "Enter argument\n";
	return (0);
}