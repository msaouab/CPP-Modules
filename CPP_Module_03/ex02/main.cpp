/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:56:37 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/21 15:10:39 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

int	main()
{
	FragTrap	Solder_n;
	FragTrap	Solder("med");

	Solder.attack("med");
	Solder_n.takeDamage(50);
	Solder.beRepaired(10);
	Solder.highFivesGuys();
}