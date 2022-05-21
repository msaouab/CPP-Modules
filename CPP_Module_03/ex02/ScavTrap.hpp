/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:37:33 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/21 14:34:15 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCVARAP_HPP
# define SCVARAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &a);
		ScavTrap& operator=(ScavTrap const &a);
		~ScavTrap();
		void	guardGate();
		void	attack(const std::string& target);
};

#endif