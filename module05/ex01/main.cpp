/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:05:25 by nayache           #+#    #+#             */
/*   Updated: 2021/10/18 11:45:23 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat alain("alain", -1);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form novice("novice", 249, 60);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Bureaucrat robert("robert", 30);
	Form advanced("advanced", 60, 60);
	Form expert("expert", 10, 60);

	robert.downGrade();
	robert.downGrade();
	std::cout << robert << std::endl;
	std::cout << advanced << std::endl;
	std::cout << expert << std::endl;
	robert.signForm(advanced);
	
	try
	{
		robert.signForm(expert);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		advanced.beSigned(robert);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
