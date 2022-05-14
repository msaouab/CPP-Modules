/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:02:59 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/14 10:42:12 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name;
	std::cout << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}

Zombie::Zombie(std::string _name)
{
	this->_name = _name;
}

Zombie::~Zombie()
{
	std::cout << _name;
	std::cout << ": Destroyed";
	std::cout << std::endl;
}

Zombie::Zombie()
{
}