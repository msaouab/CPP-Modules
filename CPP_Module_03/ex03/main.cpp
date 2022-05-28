/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:37:35 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/28 19:02:44 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"
int	main()
{
	DiamondTrap	solder("jocker");
	// DiamondTrap	Solder_;

	std::cout << "\n";
	solder.attack("msaouab");
    solder.attack("enemy");
    solder.takeDamage(50);
    solder.beRepaired(10);
    solder.whoAmI();
	std::cout << "\n";
}