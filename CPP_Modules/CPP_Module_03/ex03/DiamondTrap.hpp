/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:29:09 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/28 18:47:21 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const &a);
		DiamondTrap(std::string name);
		DiamondTrap &operator= (DiamondTrap const &a);
		~DiamondTrap();
		using ScavTrap::attack;
		void	whoAmI();
};

#endif