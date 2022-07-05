/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:30:45 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/05 13:45:12 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int> arr;

	for (int i = 0; i < 10; i++) {
		const int value = rand() % 10;
		arr.push_back(value);
	}
	for (int j = 0; j < 10; ++j) {
		std::cout << arr[j];
		if (j < 9)
			std::cout << ',';
	}

	easyfind(arr, 5);
	return (0);
}