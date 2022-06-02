/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:56:48 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/01 18:52:59 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor Called\n";
}

Brain& Brain::operator= (Brain const &a) {
	if (this != &a) {
        std::cout << "Brain assign operator called" << std::endl;
        for (int i = 0; i < 100; i++)
            this->ideas[i] = a.ideas[i];
    }
    return (*this);
}

Brain::Brain(Brain const &a) {
	std::cout << "Brain Copy Constructor Called\n";
	(*this) = a;
}

Brain::~Brain() {
	std::cout << "Brain DeConstructor Called\n";
}