/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:12:50 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/21 20:25:20 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm Default Constructor Called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target)
	: Form("RobotomyRequestForm", RRF_sign, RRF_exec), _Target(target) {
	std::cout << "RobotomyRequestForm Constructor With Parameter Called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a) 
	: Form(a), _Target(a._Target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm Destructor Called\n";
}

void	RobotomyRequestForm::action() const {
	srand(time(NULL));
	int randomNumber =  rand() % 2;
	if (randomNumber == 1)
		std::cout << this->_Target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_Target << " has been failed to robotomize" << std::endl;
}