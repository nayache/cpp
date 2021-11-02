/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:17:49 by nayache           #+#    #+#             */
/*   Updated: 2021/11/02 13:42:17 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define INIT_TAB {104, 101, 108, 108, 111}
#define INIT_TAB2 {104.1f, 101.1f, 108.1f, 108.1f, 111.1f}

template<typename T>
void	iter(T* array, unsigned int length, void (*fn)(T const& e))
{
	for (unsigned int i = 0; i < length; i++)
	{
		fn(array[i]);
		std::cout << " ";
	}
}

template <typename T>
void	print(T const& element)
{
	std::cout << element;
}

int main()
{
	int		tab[6] = INIT_TAB;
	char	tabLiteral[6] = INIT_TAB;
	float	ftab[6] = INIT_TAB2;
	double	dtab[6] = INIT_TAB2;

	iter(tab, 5, &print);
	std::cout << std::endl;
	iter(tabLiteral, 5, &print);
	std::cout << std::endl;
	iter(ftab, 5, &print);
	std::cout << std::endl;
	iter(dtab, 5, &print);
	std::cout << std::endl;

	return (0);
}
