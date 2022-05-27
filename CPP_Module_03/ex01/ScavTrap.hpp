/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:16:04 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/23 12:24:56 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string	_name;
		int			_hit;
		int			_energy;
		int			_attack;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &a);
		ScavTrap& operator= (const ScavTrap &a);
		~ScavTrap();
		void	guardGate();
};

#endif