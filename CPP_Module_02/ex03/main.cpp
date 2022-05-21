/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:46:23 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/20 10:43:22 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

int	main()
{
	std::cout << "Check Point: " << std::endl;
	Point p1(0, 0), p2(20, 0), p3(10, 30);
	Point p(10, 15);
	if (bsp(p1, p2, p3, p))
		std::cout << "\tPoint is inside the triangle." << std::endl;
	else
		std::cout << "\tPoint is outside the triangle" << std::endl;
}
