/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:59:56 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/30 18:02:44 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{	
	public:
		Dog();
		Dog(Dog const &a);
		Dog& operator= (Dog const &a);
		~Dog();
		void	setType(std::string type);
		std::string	getType() const;
		void	makeSound() const;
};

#endif