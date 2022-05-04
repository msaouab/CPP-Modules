/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:53:22 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/04 17:52:46 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "phonebook.hpp"

void	print_header(void)
{
	std::cout << "/* *************************** */" << std::endl;
	std::cout << "/*     Choose your Command     */" << std::endl;
	std::cout << "/*  1./ ADD: For new Contact.  */" << std::endl;
	std::cout << "/*  2./ SEARCH: For a Contact. */" << std::endl;
	std::cout << "/*  3./ EXIT: For quit.        */" << std::endl;
	std::cout << "/* *************************** */" << std::endl;
}