/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:37:35 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/25 11:53:48 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
int	main()
{
	FragTrap	solder("msaouab");
	// FragTrap	Solder_;

	std::cout << "\n";
	solder.attack("med");
	solder.takeDamage(50);
	solder.beRepaired(10);
	solder.highFivesGuys();
	std::cout << "\n";
}