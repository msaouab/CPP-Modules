/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:11:05 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/21 20:25:34 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm Default Constructor Called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target)
	: Form("PresidentialPardonForm", PPF_sign, PPF_exec), _Target(target) {
	std::cout << "PresidentialPardonForm Constructor With Parameter Called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a) 
	: Form(a), _Target(a._Target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm Destructor Called\n";
}

void	PresidentialPardonForm::action() const {
	std::cout << this->_Target << " has been pardoned by med\n";
}