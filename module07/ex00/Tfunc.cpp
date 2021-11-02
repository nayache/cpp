/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tfunc.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:20:59 by nayache           #+#    #+#             */
/*   Updated: 2021/11/02 13:27:05 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
T	min(T a, T b)
{
	return (a < b ? a : b);
}

template <typename T>
T	max(T a, T b)
{
	return (a > b ? a : b);
}

template <typename T>
void	swap(T* a, T* b)
{
	T tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
