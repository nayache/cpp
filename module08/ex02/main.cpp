/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:04:04 by nayache           #+#    #+#             */
/*   Updated: 2021/11/12 13:37:58 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutanstack.hpp"

int	main(void)
{
	MutanStack<int> test;

	test.push(10);
	test.push(20);
	test.push(30);

	MutanStack<int>::const_iterator it;

	for (it = test.begin(); it != test.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << test.top() << std::endl;
	std::cout << test.size() << std::endl;

	return (0);
}
