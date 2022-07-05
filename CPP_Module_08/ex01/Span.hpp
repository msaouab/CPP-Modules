/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:37:52 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/05 10:43:33 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vec;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &a);
		Span& operator= (Span const &a);
		~Span();

		void			addNumber(unsigned int num);
		unsigned int	shortestSpan() const ;
		unsigned int	longestSpan() const ;

		class NoSpan: public std::exception
		{
			virtual const char* what() const throw();
		};

		class NoSpaceLeft: public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif