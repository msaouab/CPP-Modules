/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:03:01 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 18:48:53 by msaouab          ###   ########.fr       */
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
		Zombie(std::string _name);
		Zombie();
		~Zombie();
		void	announce();
};

/* function */
Zombie*	newZombie( std::string _name );
void	randomChump( std::string _name );

#endif //ZOMBIE_HPP
