/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:45:39 by nayache           #+#    #+#             */
/*   Updated: 2021/11/09 16:22:41 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int	main(void)
{
	Span test(5);

	test.addNumber(-2);
	test.addNumber(12);
	test.addNumber(12);
	test.addNumber(19);
	test.addNumber(30);

	try {
		test.addNumber(42);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;
	
	Span test2(1);
	try {
		std::cout << test2.shortestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::vector<int> vec(1000, 42);
	vec[2] = 40;

	test.addNumber(vec.begin(), vec.end());

	std::cout << test.longestSpan() << std::endl;
	return (0);
}
