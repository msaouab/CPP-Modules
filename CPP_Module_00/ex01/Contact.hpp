/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:14:45 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/05 20:31:47 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
/* code */
# include <iostream>
# include <string.h>

typedef struct s_data
{
	std::string	_first;
	std::string	_last;
	std::string	_nick;
	std::string	_phone;
	std::string	_dark;
	int			Old_index;
	int			New_index;
}	t_data;

typedef struct s_print
{
	std::string	_first;
	std::string	_last;
	std::string	_nick;
	std::string	_phone;
	std::string	_dark;
}	t_print;

class	Contact {
	std::string	_First;
	std::string	_Last;
	std::string	_Nick;
	std::string	_Darkset;
	std::string	_Phone;
	public:
		Contact() {};
		void		setFirst(std::string _var);
		void		setLast(std::string _var);
		void		setNick(std::string _var);
		void		setPhone(std::string _var);
		void		setDarkset(std::string _var);
		std::string	getFirst();
		std::string	getLast();
		std::string	getNick();
		std::string	getPhone();
		std::string	getDarkset();
};

#endif //PHONEBOOK_HPP
