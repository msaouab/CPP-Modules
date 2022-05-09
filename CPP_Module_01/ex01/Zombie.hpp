/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:03:01 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/09 14:13:57 by msaouab          ###   ########.fr       */
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
		void	announce(int i);
};

/* function */
Zombie* zombieHorde( int N, std::string _name );
void	randomChump(std::string _name, int n);

#endif //ZOMBIE_HPP
