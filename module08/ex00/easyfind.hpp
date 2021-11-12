/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:04:13 by nayache           #+#    #+#             */
/*   Updated: 2021/11/03 12:54:37 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <list>
#include <stdexcept>

template <typename T>
int&	easyfind(T& container, int search)
{
	typename T::iterator it = container.begin();
	typename T::iterator ite = container.end();

	it = std::find(it, ite, search);
	
	if (it == container.end())
		throw std::runtime_error("\e[3;33m(Exception)easyfind: value not found\e[0m");
	
	return (*it);
}

#endif
