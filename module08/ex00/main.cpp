/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:15:47 by nayache           #+#    #+#             */
/*   Updated: 2021/11/03 12:51:37 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

int	main()
{
	std::list<int>		lst;
	std::vector<int>	vec;

	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);

	vec.push_back(11);
	vec.push_back(22);
	vec.push_back(33);
	vec.push_back(44);

	try {
		int result = easyfind(lst, 550);
		std::cout << result << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	int result = easyfind(lst, 10);
	std::cout << result << std::endl;

	try {
		int result = easyfind(vec, 55);
		std::cout << result << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	result = easyfind(vec, 11);
	std::cout << result << std::endl;
	
	return (0);
}
