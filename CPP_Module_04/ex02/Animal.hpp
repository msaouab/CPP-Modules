/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:45:13 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/02 15:33:39 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &a);
		Animal &operator= (Animal const &a);
		virtual	~Animal();
		void			setType(std::string type);
		std::string		getType(void) const;
		virtual void	makeSound() const = 0;
};

#endif