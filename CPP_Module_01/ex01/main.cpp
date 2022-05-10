/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:02:39 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/10 14:25:36 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main()
{
	Zombie	*ZombiesSchool;
	int		N;
	int		i;

	N = 5;
	i = 0;
	ZombiesSchool = zombieHorde(N, "Zombie");
	while (i < N)
	{
		ZombiesSchool[i].announce();
		i++;
	}
	i = 0;
	delete [] ZombiesSchool;
}