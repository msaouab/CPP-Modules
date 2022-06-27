/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:04:21 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/27 21:31:08 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Form.hpp"

int main()
{

    try {
        Bureaucrat Burcart("Zero", 130);
        Form form0("First", 40 , 10);
        Form form1("Seconde", 10, 110);
        std::cout << std::endl;
        std::cout << "bureaucrat : " << Burcart << std::endl;
        std::cout << "form0 : " << form0 << std::endl;
        std::cout << "form1 : " << form1 << std::endl;
        std::cout << std::endl;

        std::cout << "******** "<< Burcart.getName() << " try to sign " << form0.getName() << " ********"<< std::endl;
        Burcart.signForm(form0);

        std::cout << std::endl;
        std::cout << "******** "<< Burcart.getName() << " try to sign " << form1.getName() << " ********"<< std::endl;
        Burcart.signForm(form1);

        std::cout << std::endl;
        std::cout << "form0 : " << form0 << std::endl;
        std::cout << "form1 : " << form1 << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << "main catch : " ;
        std::cout << e.what() << std::endl;
    }
    return 0;
}
