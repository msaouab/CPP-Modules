/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:16:04 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/28 12:13:51 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &a);
		ScavTrap& operator= (const ScavTrap &a);
		~ScavTrap();
		// void	setName(std::string name);
		// void	setHit(int hit);
		// void	setEnergy(int energy);
		// void	setAttack(int attack);
		// std::string	getName(void);
		// int			getHit(void);
		// int			getEnergy(void);
		// int			getAttack(void);
		void	guardGate(void);
};

#endif