/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:56:24 by nayache           #+#    #+#             */
/*   Updated: 2021/10/27 11:55:38 by nayache          ###   ########.fr       */
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
			break;
		i++;
	}
	return (i);
}

void	printCreation(const std::string type)
{
	std::cout << "Intern creates (\e[1;32m" << type << "\e[0m) ";
	std::cout << "form" << std::endl;
}

static Form*	createShrubberyCreation(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form*	createRobotomyRequest(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form*	createPresidentialPardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(const std::string type, const std::string target)
{
	int	index = type_occurence(type);

	if (index == 3)
		throw std::runtime_error("\e[33m(Exception)unknow type form specified\e[0m");
	
	Form* (*createForm[3])(const std::string target);
	
	createForm[0] = createShrubberyCreation;
	createForm[1] = createRobotomyRequest;
	createForm[2] = createPresidentialPardon;

	Form	*newForm = createForm[index](target);
	
	printCreation(type);

	return (newForm);
}

/*Form*	Intern::makeForm(const std::string type, const std::string target)
{
	Form*	newForm = NULL;
	int		index;
		
	index = type_occurence(type);
	
	switch (index) {
		
		case 0:
				newForm = new ShrubberyCreationForm(target);
				break;
		case 1:
				newForm = new RobotomyRequestForm(target);
				break;
		case 2:
				newForm = new PresidentialPardonForm(target);
				break;
		
		default:
			throw std::runtime_error("\e[33m(Exception)unknow type form specified\e[0m");
	}
	
	printCreation(type);
	
	return (newForm);
}*/
