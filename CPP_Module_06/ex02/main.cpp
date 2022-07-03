/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:13:12 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/03 16:36:53 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Base.hpp"

Base*	generate(void)
{
	srand(time(NULL));

	int var = rand() % 3;

    if (var == 0) 
		return (new A);
    else if (var == 1)
		return (new B);
    else
		return (new C);
}

void	identify(Base* p)
{
	A *ptr_A = dynamic_cast<A*>(p);

	if (ptr_A != nullptr) {
		std::cout << "A" << std::endl;
		return ;
	}

	B *ptr_B = dynamic_cast<B*>(p);

	if (ptr_B != nullptr) {
		std::cout << "B" << std::endl;
		return ;
	}

	C *ptr_C = dynamic_cast<C*>(p);

	if (ptr_C != nullptr) {
		std::cout << "C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try {
		A &ref_A = dynamic_cast<A&>(p);
		(void)ref_A;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try {
		B &ref_B = dynamic_cast<B&>(p);
		(void)ref_B;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try {
		C &ref_C = dynamic_cast<C&>(p);
		(void)ref_C;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

}

int	main()
{
	Base *ptr = generate();
	identify(ptr);

	identify(*ptr);

	delete ptr;
	return 0;
}
