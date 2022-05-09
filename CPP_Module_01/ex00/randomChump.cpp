/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:02:56 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/09 11:08:06 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void	randomChump(std::string _name)
{
	Zombie *ZombiesSchool = newZombie(_name);
	ZombiesSchool->announce();
	delete ZombiesSchool;
	std::cout << _name;
	std::cout << ": Destroyed";
	std::cout << std::endl;
}