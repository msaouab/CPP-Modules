/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:49:18 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/21 18:25:01 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "./ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		/* data */
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &a);
		~FragTrap();
		FragTrap&	operator= (FragTrap const &a);
		void	highFivesGuys(void);
};

#endif