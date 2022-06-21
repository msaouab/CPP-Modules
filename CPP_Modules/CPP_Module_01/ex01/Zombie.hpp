/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:03:01 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/14 10:48:09 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/* header */
# include <iostream>

/* class */
class	Zombie {
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void setName(std::string _name);
		void	announce();
};

/* function */
Zombie*	zombieHorde( int N, std::string name );

#endif //ZOMBIE_HPP
