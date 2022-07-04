/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:14:48 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/04 13:08:18 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

#define MAX_VAL 5

template <typename T>

class Array {
	private:
		T		*arr;
		size_t	_size;
	public:
		Array() : _size(0), arr(NULL) {}
		Array(unsigned int n) : _size(n) {
			arr = new T[n];
			memset(arr, 0, sizeof(T) * _size);
		}
		Array(Array const &a) : arr(NULL) {
			*this = a;
		}
		Array& operator= (Array const &a) {
			if (this != &a) {
				delete[] arr;
				_size = a._size;
				arr = new T[_size];
				std::copy(a.arr, a.arr + _size, arr);
			}
			return (*this);
		}
		T &operator[] (size_t i) {
			if (i >= _size)
				throw Array::OutofArray();
			return (arr[i]);
		}
		~Array() {
			delete[] arr;
		}
		class OutofArray: public std::exception
		{
			virtual const char * what() const throw()
			{
				return (".:|--ARRAYEXCEPTION: The Index is Out of Array--|:.");
			}
		};
		const T & operator[]( unsigned int n ) const
		{
			if (n > this->_size)
				throw Array::OutofArray();
			return (this->_arr[n]);
		};
		unsigned int size() const { return (this->_size); };
};

#endif