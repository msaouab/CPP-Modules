/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:23:50 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/02 02:37:41 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

string	ft_uppercase(string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += 32;
	}
	return (str);
}

int	main(int ac, char **av)
{
	string	upper;
	int	i;

	i = 1;
	while (i < ac)
	{
		upper = ft_uppercase(av[i]);
		std::cout << upper;
		i++;
	}
}