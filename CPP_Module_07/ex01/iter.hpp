/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:26:47 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/04 11:11:00 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>

void	iter(T *arr, size_t size, void (*f)(T const &val))
{
	int	i;

	i = 0;
	while (i < size) {
		f(arr[i]);
		i++;
	}
}

template <typename T>

void print(T const &val)
{
	std::cout << "\033[0;34m" << val << "\n\033[0m";
}

#endif