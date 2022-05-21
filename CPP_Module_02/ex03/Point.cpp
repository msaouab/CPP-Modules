/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:46:48 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/20 10:42:15 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

Point::Point():_x(0), _y(0) {
	std::cout << "Default constructor" << std::endl;
}

Point::Point(Point const &a) {
	std::cout <<"Copy constructor" << std::endl;
}

Point::Point(float x, float y): _x(x), _y(y) {
}

Fixed	Point::getX() const {
	return _x;
}
Fixed	Point::getY() const {
	return _y;
}
Point &Point::operator= (Point const &a) {
	(void)a;
	std::cout << "Copy assignment operator" << std::endl;
    return (*this);
}

Point::~Point() {
	std::cout << "Destructor called" << std::endl;
}
