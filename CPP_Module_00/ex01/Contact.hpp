/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:14:45 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/04 19:05:39 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
/* code */
# include <iostream>
# include <string.h>

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
		void		setDarkset(std::string _var);
		void		setPhone(std::string _var);
		std::string	getFirst();
		std::string	getLast();
		std::string	getNick();
		std::string	getDarkset();
		std::string	getPhone();
};

#endif //PHONEBOOK_HPP
