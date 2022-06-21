/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:09:42 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/21 17:13:22 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "./Form.hpp"
#define RRF_sign 72
#define RRF_exec 45

class RobotomyRequestForm : public Form
{
	private:
		std::string const	_Target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &a);
		RobotomyRequestForm& operator= (RobotomyRequestForm const &a);
		~RobotomyRequestForm();

		void	action() const ;
};

#endif