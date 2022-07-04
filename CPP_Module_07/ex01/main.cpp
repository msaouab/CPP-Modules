/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:26:27 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/04 11:12:14 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./iter.hpp"

int main( void )
{
	int arr[5] = {0, 1, 2, 3, 4};
	std::cout << "\033[0;32m" << ".:|--------|Integer|--------|:.\n" << "\033[0m";
	iter(arr, 5, &print);

	float fltR[5] = {0.0f, 1.1f, 2.2f, 3.3f, 4.4f};
	std::cout << "\033[0;32m" << ".:|--------|Float|--------|:.\n" << "\033[0m";
	iter(fltR, 5, &print);

	double dblR[5] = {0.00, 1.11, 2.22, 3.33, 4.44};
	std::cout << "\033[0;32m" << ".:|--------|double|--------|:.\n" << "\033[0m";
	iter(dblR, 5, &print);

	bool blR[2] = {false, true};
	std::cout << "\033[0;32m" << ".:|--------|bool|--------|:.\n" << "\033[0m";
	iter(blR, 2, &print);

	std::string stringR[5] = {"msaouab", "Med", "1337", "Hello World!", "Intra"};
	std::cout << "\033[0;32m" << ".:|--------|string|--------|:.\n" << "\033[0m";
	iter(stringR, 5, &print);

	std::cout << "\033[0;32m" << ".:|--------|string but with size == 2|--------|:.\n" << "\033[0m";
	iter(stringR, 2, &print);

	return 0;
}