/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:47:47 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/14 11:03:25 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	zombieHorde(int N, std::string _name)
{
	int	i;
	Zombie* Walkers = new Zombie[N];

	for (i = 0; i < N; i++)
		std::cout << _name << ": Created" << std::endl;
	for (i = 0; i < N; i++) {
        Walkers[i].setName(_name);
		Walkers->announce();
	}
	return (Walkers);
}
