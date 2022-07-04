/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:15:44 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/04 12:59:45 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Array.hpp"

#include "Array.hpp"

int main()
{
	Array<int>            intArray;
	Array<std::string>    stringArray(5);
	Array<std::string>    otherStringArray;

	stringArray[0] = "Hello";
	stringArray[1] = "How are you?";
	stringArray[2] = "Fine and you?";
	stringArray[3] = "Doing great thanks!";
	stringArray[4] = "You're very welcome";
	std::cout << ".:|intArray->size(" << intArray.size() << ")|:.\n";
	std::cout << ".:|stringArray->size(" << stringArray.size() << ")|:.\n";
	otherStringArray = stringArray;
	otherStringArray[3] = "I'm good, how about you?";

	try {
		std::cout << stringArray[20] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	{
		Array<std::string>    test(10);
		test = stringArray;
		test[2] = "Hello World!";
		std::cout << stringArray[2] << std::endl;
		std::cout << test[2] << std::endl;
	}
	{
		Array<std::string>    test(stringArray);
		test[2] = "Hello World!";
		std::cout << stringArray[2] << std::endl;
		std::cout << test[2] << std::endl;
	}

	return 0;
}
