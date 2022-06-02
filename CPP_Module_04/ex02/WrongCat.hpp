/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:18:51 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/30 17:02:40 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &a);
		WrongCat(std::string type);
		WrongCat &operator= (WrongCat const &a);
		~WrongCat();
		void	setType(std::string type);
		std::string	getType(void) const;
		void	makeSound() const;
};

#endif