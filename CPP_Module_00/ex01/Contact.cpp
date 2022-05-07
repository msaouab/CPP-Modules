/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:13:44 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/06 14:21:03 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"

void	Contact::setfirst(std::string _first)
{
	_First = _first;
}
void	Contact::setlast(std::string _last)
{
	_Last = _last;
}
void	Contact::setnick(std::string _nick)
{
	_Nick = _nick;
}
void	Contact::setphone(std::string _phone)
{
	_Phone = _phone;
}
void	Contact::setdark(std::string _dark)
{
	_Dark = _dark;
}
std::string	Contact::getfirst(void)
{
	return (_First);
}
std::string	Contact::getlast(void)
{
	return (_Last);
}
std::string	Contact::getnick(void)
{
	return (_Nick);
}
std::string	Contact::getphone(void)
{
	return (_Phone);
}
std::string	Contact::getdark(void)
{
	return (_Dark);
}