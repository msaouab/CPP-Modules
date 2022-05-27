/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:37:35 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/23 12:04:17 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int	main()
{
	ClapTrap	solder("msaouab");

	solder.attack("med");
	solder.takeDamage(50);
	solder.beRepaired(10);
}