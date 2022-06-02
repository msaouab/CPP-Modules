/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:59:53 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/01 18:38:44 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*Brain;
	public:
		Cat();
		Cat(Cat const &a);
		Cat& operator= (Cat const &a);
		~Cat();
		void	setType(std::string type);
		std::string	getType() const;
		void	makeSound() const;
};

#endif