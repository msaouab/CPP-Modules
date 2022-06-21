/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:07:19 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/06 14:18:19 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
/* code */
# include <iostream>
# include <string.h>
class	Contact {
	std::string	_First;
	std::string	_Last;
	std::string	_Nick;
	std::string	_Phone;
	std::string	_Dark;
	public:
		Contact() {}; 
		void	setfirst(std::string _fist);
		void	setlast(std::string _last);
		void	setnick(std::string _nick);
		void	setphone(std::string _phone);
		void	setdark(std::string _dark);
		std::string	getfirst(void);
		std::string	getlast(void);
		std::string	getnick(void);
		std::string	getphone(void);
		std::string	getdark(void);
};

#endif //CONTACT.HPP
