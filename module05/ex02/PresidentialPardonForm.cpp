/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:45:35 by nayache           #+#    #+#             */
/*   Updated: 2021/10/19 11:11:09 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
	
PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("Presidential pardon", 25, 5),
_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : Form(src),
_target(src.getTarget())
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& src)
{
	this->Form::operator=(src);
	this->_target = src.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	this->Form::execute(executor);
	if (this->getSigned() == false || executor.getGrade() > this->getRequiredToExec())
		return;
	
	std::cout << "\e[1;38m" << this->_target << "\e[0m\e[3;38m";
	std::cout << " was forgiven by \e[0m\e[1;36m" << "Zafod Beeblebrox\e[0m";
	std::cout << std::endl; 
}
