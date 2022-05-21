/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:46:51 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/19 12:01:07 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "./Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(Point const &a);
		Point(float x, float y);
		~Point();
		Fixed	getX() const;
		Fixed	getY() const;
		Point &operator= (Point const &a);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif