/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:05:25 by nayache           #+#    #+#             */
/*   Updated: 2021/10/19 11:29:29 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat alain("alain", -2);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Bureaucrat robert("robert", 144);
	Bureaucrat albert("albert", 50);
	Bureaucrat alain("alain", 2);
	
	std::cout << robert << std::endl;
	std::cout << albert << std::endl;
	std::cout << alain << std::endl;
	ShrubberyCreationForm sc("maison");
	RobotomyRequestForm rr("georges");
	PresidentialPardonForm pp("charles");
	// Shrubbery
	std::cout << sc << std::endl;
	robert.signForm(sc);
	try
	{
		alain.signForm(sc);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		robert.executeForm(sc);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	albert.executeForm(sc);
	// Robotomy
	std::cout << rr << std::endl;
	try
	{
		robert.signForm(rr);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	albert.signForm(rr);
	try
	{
		albert.executeForm(rr);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	alain.executeForm(rr);
	// Presidential
	std::cout << pp << std::endl;
	alain.signForm(pp);
	alain.executeForm(pp);
	// exception at creation
	try
	{
		Bureaucrat test("test", 151);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat test("test", 0);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form test("test", 151, 100);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form test("test", 100, -1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
