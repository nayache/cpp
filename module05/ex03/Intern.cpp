/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:56:24 by nayache           #+#    #+#             */
/*   Updated: 2021/10/19 12:51:48 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const& src)
{
	(void)src;
}

Intern::~Intern()
{
}

Intern&	Intern::operator=(Intern const& src)
{
	(void)src;
	return (*this);
}

int		type_occurence(const std::string type)
{
	const	std::string	typeForm[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	int i(0);	
	while (i < 3)
	{
		if (type.compare(typeForm[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}

void	printCreation(const std::string type)
{
	std::cout << "Intern creates (\e[1;32m" << type << "\e[0m) ";
	std::cout << "form" << std::endl;
}

Form*	Intern::makeForm(const std::string type, const std::string target)
{
	Form*	newForm = NULL;
	int		index;
		
	index = type_occurence(type);
	
	switch (index) {
		
		case 0:
				newForm = new ShrubberyCreationForm(target);
				printCreation(type);
				break;
		case 1:
				newForm = new RobotomyRequestForm(target);
				printCreation(type);
				break;
		case 2:
				newForm = new PresidentialPardonForm(target);
				printCreation(type);
				break;
		
		default:
			throw std::runtime_error("\e[33m(Exception)unknow type form specified\e[0m");
	}
	return (newForm);
}
