/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:11:30 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/04 16:54:46 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
/* code */
# include <iostream>
# include <string.h>
# include "Contact.hpp"

# define	true 1
# define	false 0

class	PhoneBook {
	Contact	_Contact[8];
	int		Old_index;
	int		New_index;
	public:
		PhoneBook() {};
		void		add();
		void		search();
};

// PhoneBook::PhoneBook(void){};

bool	ft_Number(std::string str);
void	print_header(void);

#endif //PHONEBOOK_HPP
