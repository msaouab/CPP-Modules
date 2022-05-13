/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:47:47 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 19:26:42 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	zombieHorde(int N, std::string _name)
{
	int	i;
	Zombie* Walkers = new Zombie[N];
    // Zombie * Walkers = (Zombie *)operator new (N * sizeof(Zombie));

	i = 0;
	while (i < N)
	{
        Walkers[i].kalwa(_name);
		Walkers->announce();
		i++;
	}
	delete [] Walkers;
	return (Walkers);
}
