/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:46:45 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/20 12:19:00 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	v1;
	Fixed	v2;

	v1 = a.getX() - b.getX();
	v2 = a.getY() - b.getY();
	bool s_ab = (c.getX() - b.getX())* v1 - (c.getY() - b.getY()) * v1 > 0;
	std::cout << s_ab << std::endl;
    if ((point.getX() - b.getX()) * v2 - (point.getY() - b.getY()) * v1 > 0 == s_ab)
		return false;
    if ((point.getX() - b.getX()) * (a.getY() - c.getY()) - (point.getY() - c.getY()) * (a.getX() - c.getX()) > 0 != s_ab)
		return true;
	return (0);
}
