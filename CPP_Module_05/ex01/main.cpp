/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:04:21 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/15 12:06:56 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Form.hpp"

int main()
{
    Bureaucrat Burcart("MED", 20);
    Form form0("first", 25 , 25);
    Form form1("seconde", 1, 1);

    try {
        std::cout << std::endl;
        std::cout << "bureaucrat : " << Burcart << std::endl;
        std::cout << "form0 : " << form0 << std::endl;
        std::cout << "form1 : " << form1 << std::endl;
        std::cout << std::endl;

        std::cout << "******** "<< Burcart.getName() << " try to sign " << form0.getName() << "  ********"<< std::endl;
        Burcart.signForm(form0);

        std::cout << std::endl;
        std::cout << "******** "<< Burcart.getName() << " try to sign " << form1.getName() << "  ********"<< std::endl;
        Burcart.signForm(form1);
    }
    catch(const std::exception& e) {
        std::cout << "main catch : " ;
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "form0 : " << form0 << std::endl;
    std::cout << "form1 : " << form1 << std::endl;
    return 0;
}
