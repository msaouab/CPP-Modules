/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:54:49 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/05 14:40:23 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template <class Type, class Container = std::deque<Type> >
class MutantStack : public std::stack<Type, Container>
{
	private:
	public:
		MutantStack() : std::stack<Type, Container>() {};
		~MutantStack() {};
		MutantStack & operator = (const MutantStack & rhs)
		{
			if (this == &rhs )
				return (*this);
			this->c = rhs.c;
			return (*this);
		}
		typedef typename std::stack<Type, Container>::container_type::iterator iterator;
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
};

#endif