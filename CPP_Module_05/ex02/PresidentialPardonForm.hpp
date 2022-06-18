/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:09:43 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/18 14:50:13 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "./Form.hpp"

class PresidentialPardonForm
{
	private:
		std::string Target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &a);
		PresidentialPardonForm& operator= (PresidentialPardonForm const &a);
		~PresidentialPardonForm();
		void	getTarget(std::string target);
};

#endif