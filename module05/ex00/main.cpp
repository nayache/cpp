/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:28:36 by nayache           #+#    #+#             */
/*   Updated: 2021/10/18 11:51:27 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	john("john", 30);

	try
	{
		Bureaucrat	charles("charles", 151);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	john("john", -1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	
	john.upGrade();
	std::cout << john << std::endl;
	john.downGrade();
	std::cout << john << std::endl;
	return (0);
}
