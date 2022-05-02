/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:23:50 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/01 23:59:40 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac - 1)
	{
		transform(av[i].begin(), av[i].end(), av[i].begin(), ::toupper);
		cout << av[i];
		i++;
	}
}