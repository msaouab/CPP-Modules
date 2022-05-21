/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:56:37 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/20 13:25:33 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int	main()
{
	ClapTrap	Solder;

	Solder.attack("med");
	Solder.takeDamage(50);
	Solder.beRepaired(10);
}