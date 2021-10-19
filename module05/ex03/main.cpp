/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:05:25 by nayache           #+#    #+#             */
/*   Updated: 2021/10/19 12:38:20 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	intern;

	try
	{
		Form*	ff = intern.makeForm("wrong form", "smith");
		delete ff;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Form*	rr = intern.makeForm("robotomy request", "smith");
	Form*	pp = intern.makeForm("presidential pardon", "smith");
	
	std::cout << *rr << std::endl;
	std::cout << *pp << std::endl;
	
	delete rr;
	delete pp;
	
	return (0);
}
