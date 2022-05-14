/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:02:59 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/14 11:03:40 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void Zombie::setName(std::string _name)
{
	this->_name = _name;
}

void	Zombie::announce(void)
{
	std::cout << _name;
	std::cout << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": Destroyed" << std::endl;
}