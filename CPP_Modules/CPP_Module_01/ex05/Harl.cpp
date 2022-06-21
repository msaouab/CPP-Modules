/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:21:19 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 16:04:01 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese";
	std::cout << "-triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
}
void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more mone";
	std::cout << ". You didn’t putenough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!";
	std::cout << std::endl;
}
void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been ";
	std::cout << "coming foryears whereas you started working here since last month.";
	std::cout << std::endl;
}
void	Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level) {
	void (Harl::*arr_functions[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string choice[4] = {
		"1",
		"2",
		"3",
		"4",
	};
	for (int i = 0; i < 4; i++) {
		if (level == choice[i])
			(this->*arr_functions[i])();
	}
}