/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:11:30 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/05 20:16:13 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
/* code */

# include <iostream>
# include <string.h>
# include "Contact.hpp"

// using std::cout;
// using std::string;

# define	true 1
# define	false 0

class	PhoneBook {
	Contact	_Contact[8];
	public:
		PhoneBook() {};
		void		Add(t_data *data, int	i);
		void		Search(int count);
};

// PhoneBook::PhoneBook(void){};

bool	ft_Number(std::string str);
void	print_header(void);

#endif //PHONEBOOK_HPP
