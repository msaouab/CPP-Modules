/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:53:33 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/04 19:39:55 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirst(std::string _var)
{
	_First = _var;
}

void	Contact::setLast(std::string _var)
{
	_Last = _var;
}

void	Contact::setNick(std::string _var)
{
	_Nick = _var;
}

void	Contact::setDarkset(std::string _var)
{
	_Darkset = _var;
}

void	Contact::setPhone(std::string _var)
{
	_Phone = _var;
}

std::string	Contact::getFirst()
{
	return this->_First;
}

std::string	Contact::getLast()
{
	return this->_Last;
}

std::string	Contact::getNick()
{
	return this->_Nick;
}

std::string	Contact::getDarkset()
{
	return this->_Darkset;
}

std::string	Contact::getPhone()
{
	return this->_Phone;
}