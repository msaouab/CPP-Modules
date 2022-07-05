/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:30:44 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/05 13:46:06 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND

# include <iostream>

#define true 1
#define false 0

template <typename T>

bool	easyfind(T x, int y)
{
	for (int i = 0; i < x.size(); i++) {
		if (y == x[i]) {
			std::cout << "\nthe first occurence founded\n";
			return true;
		}
	}
	std::cout << "\nthe first occurence Not founded\n";
	return (false);
}

#endif