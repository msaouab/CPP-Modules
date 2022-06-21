/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:18:52 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/02 18:30:36 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "./Animal.hpp"

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &a);
		WrongAnimal &operator= (WrongAnimal const &a);
		~WrongAnimal();
		void		setType(std::string type);
		std::string	getType(void) const;
		void	makeSound() const;
};

#endif