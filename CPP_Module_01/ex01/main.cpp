/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:02:39 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/14 10:54:13 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main()
{
	Zombie	*Walkers;
	int		N;

	N = 5;
	Walkers = zombieHorde(N, "Zombie");
	delete [] Walkers;
}