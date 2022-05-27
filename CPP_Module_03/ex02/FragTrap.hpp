/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:34:27 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/25 11:27:44 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &a);
		FragTrap& operator= (FragTrap const &a);
		~FragTrap();
		void	setname(std::string name);
		void	sethit(int hit);
		void	setenergy(int energy);
		void	setattak(int attak);
		std::string	getname();
		int			gethit();
		int			getenergy();
		int			getattak();
		void	highFivesGuys(void);
};

#endif