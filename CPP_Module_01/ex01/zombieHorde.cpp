/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:42:01 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/09 15:11:20 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string _name)
{
	int	i;

	i = 0;
	Zombie *walkers = new Zombie[N];
	while (i < N)
	{
		std::cout << _name;
		std::cout << " " << i;
		std::cout << ": Created";
		std::cout << std::endl;
		i++;
	}
	return (walkers);
}

void	randomChump(std::string _name, int n)
{
	int	i;

	Zombie *ZombieSchool = zombieHorde(n, _name);
	ZombieSchool->announce(n);
	delete [] ZombieSchool;
	i = 0;
	while (i < n)
	{
		std::cout << _name;
		std::cout << " " << i;
		std::cout << ": Destroyed";
		std::cout << std::endl;
		i++;
	}
}
