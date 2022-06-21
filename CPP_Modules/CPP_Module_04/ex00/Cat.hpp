/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:59:53 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/30 18:02:41 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
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