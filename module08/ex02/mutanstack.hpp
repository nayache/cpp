/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutanstack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:48:52 by nayache           #+#    #+#             */
/*   Updated: 2021/11/09 18:31:01 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>
# include <iterator>

template <typename T>
class	MutanStack : public std::stack<T>
{
	public:
		MutanStack();
		virtual ~MutanStack();
		MutanStack(MutanStack const& src);
		MutanStack&	operator=(MutanStack const& src);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin() { return this->c.begin(); }
		const_iterator	begin() const { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
		const_iterator	end() const { return this->c.end(); }

};

template <typename T>
MutanStack<T>::MutanStack() : std::stack<T>()
{
}

template <typename T>
MutanStack<T>::MutanStack(MutanStack const& src) : std::stack<T>(src)
{
}

template <typename T>
MutanStack<T>&	MutanStack<T>::operator=(MutanStack const& src)
{
	std::stack<T>::operator=(src);

	return (*this);
}

template <typename T>
MutanStack<T>::~MutanStack()
{
}

#endif
