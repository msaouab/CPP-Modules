/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:47:47 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/09 12:39:19 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	newZombie(std::string _name)
{
	Zombie *tmp = new Zombie(_name);
	std::cout << _name;
	std::cout << ": Created";
	std::cout << std::endl;
	return (tmp);
}