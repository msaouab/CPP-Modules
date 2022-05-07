/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:06:45 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/07 14:33:39 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
/* code */
# include <iostream>
# include <string.h>
# include <cstdlib>
# include "./Contact.hpp"
class	PhoneBook {
	Contact	_Contact[8];
	int		New;
	int		Old;
	public:
		PhoneBook() {};
		int		Add(int i, int count);
		void	Search(PhoneBook phone, int count);
		void showIndex(int index);
};

void	print_header();
void	exit_with_D();
void	print_header_table();
void	fill_table(std::string str);
void	get_result(PhoneBook phone, int count);
#endif //PHONEBOOK_HPP
