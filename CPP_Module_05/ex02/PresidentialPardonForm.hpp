/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:09:43 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/19 12:16:01 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "./Form.hpp"

#define PPF_sign 145
#define PPF_exec 137

class PresidentialPardonForm : public Form
{
	private:
		std::string const	_Target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &a);
		PresidentialPardonForm& operator= (PresidentialPardonForm const &a);
		~PresidentialPardonForm();

		void	action() const ;
};

#endif