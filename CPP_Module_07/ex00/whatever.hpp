/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:19:54 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/03 18:09:07 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &x, T &y)
{
	T z = x;
	x = y;
	y = z;
}

template <typename T>

T max(T x, T y)
{
	if (x > y)
		return (x);
	return (y);
}

template <typename T>

T min(T x, T y)
{
	if (x < y)
		return (x);
	return (y);
}

#endif