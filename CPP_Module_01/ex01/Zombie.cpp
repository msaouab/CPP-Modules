/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:02:59 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/09 15:10:48 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void	Zombie::announce(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		std::cout << _name;
		std::cout << " " << i;
		std::cout << ": BraiiiiiiinnnzzzZ...";
		std::cout << std::endl;
		i++;
	}
}

Zombie::Zombie(std::string _name)
{
	this->_name = _name;
}

Zombie::~Zombie()
{
}

Zombie::Zombie()
{
}