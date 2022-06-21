/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:04:21 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/21 17:18:36 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Form.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"

int main()
{
    int n = 5;
    Form *form[n];
    for (int i = 0; i < n; i++) {
        form[i] = nullptr;
    }
    try {
        Bureaucrat Burecrt("Med", 10);

        form[0] = new PresidentialPardonForm("ilyas");
        form[1] = new RobotomyRequestForm("issam");
        form[2] = new ShrubberyCreationForm("youssef");

        std::cout << std::endl;
        std::cout << "bureaucrat : " << Burecrt << std::endl;
        std::cout << "form[0] : " << *form[0] << std::endl;
        std::cout << "form[1] : " << *form[1] << std::endl;
        std::cout << "form[2] : " << *form[1] << std::endl;
        std::cout << std::endl;

        std::cout << "->execute Forms" << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to sign " << (*form[0]).getName() << "  ********" << std::endl;
        Burecrt.signForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to sign " << (*form[1]).getName() << "  ********" << std::endl;
        Burecrt.signForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to sign " << (*form[2]).getName() << "  ********" << std::endl;
        Burecrt.signForm(*form[2]);

        std::cout << std::endl
                  << "->execute Forms" << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to execute " << (*form[0]).getName() << "  ********" << std::endl;
        Burecrt.executeForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to execute " << (*form[1]).getName() << "  ********" << std::endl;
        Burecrt.executeForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to execute " << (*form[2]).getName() << "  ********" << std::endl;
        Burecrt.executeForm(*form[2]);

        for (int i = 0; i < n; i++) {
            delete form[i];
        }
    }
    catch (const std::exception &e) {
        std::cout << "main catch : ";
        std::cout << e.what() << std::endl;
        for (int i = 0; i < n; i++) {
            delete form[i];
        }
    }
    return 0;
}