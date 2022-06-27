/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:04:21 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/27 19:57:06 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

int	main()
{
	try {
		Bureaucrat bureau1("med", 100);
		std::cout << "\n"<< bureau1 << "\n";
		try {
			bureau1.incrementGrade();
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << "\n";
		}
		std::cout << bureau1 << "\n";
		bureau1.decrementGade();
		std::cout << bureau1 << "\n";
		Bureaucrat bureau3("msaouab", 170);
		std::cout << bureau3 << "\n";
		try {
			bureau3.decrementGade();
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << "\n";
		}
		std::cout << bureau3 << "\n";
		bureau3.incrementGrade();
		std::cout << bureau3 << "\n";

		Bureaucrat bureau2("ilyass", 0);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << "\n\n";
	}
	return 0;
}
