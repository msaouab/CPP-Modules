/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:43:26 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/02 18:31:52 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"

int main()
{
    int n = 4;
    Animal *animals[n];

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < n; i++) {
        std::cout << animals[i]->getType() << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete animals[i];
    }

    std::cout << "\n***** Copy Dog *****\n" << std::endl;

    Dog secondDog; 
    {
        Dog firstDog;
        secondDog = firstDog;
    }

    std::cout << "\n***** Copy Cat *****\n" << std::endl;

    Cat secondCat;
    {
        Cat firstCat;
        secondCat = firstCat;
    }
}
