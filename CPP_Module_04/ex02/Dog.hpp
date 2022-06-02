/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:59:56 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/02 15:29:57 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "./Animal.hpp"
# include "./Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*Brain;
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