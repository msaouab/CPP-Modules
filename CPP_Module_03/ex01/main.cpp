/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:56:37 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/21 14:33:07 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int	main()
{
	ScavTrap	Solder_n;
	ScavTrap	Solder("med");

	Solder.attack("med");
	Solder_n.takeDamage(50);
	Solder.beRepaired(10);
	Solder.guardGate();
}