/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:43:26 by msaouab           #+#    #+#             */
/*   Updated: 2022/06/01 13:00:05 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl;

    std::cout << "---- Wrong animal test ----" << std::endl;
    std::cout << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound(); //will output the cat sound!
    wrongCat->makeSound();

    std::cout << std::endl;

    delete wrongCat;
    delete wrongAnimal;

	return 0;
}