/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:45:35 by nayache           #+#    #+#             */
/*   Updated: 2021/10/19 10:59:05 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
	
RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("Robotomy request", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : Form(src), _target(src.getTarget())
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src)
{
	this->Form::operator=(src);
	this->_target = src.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	this->Form::execute(executor);
	if (this->getSigned() == false || executor.getGrade() > this->getRequiredToExec())
		return;
	
	(void)executor;
	std::cout << "Bzzz Bzzzzz..." << std::endl;
	
	std::srand(std::time(0));
	
	if (std::rand() % 2 == 0)
		std::cout << "\e[1;38m" << this->_target << "\e[0m" << " has been robotomized !" << std::endl;
	else
		std::cout << "\e[31mFailure robotomization\e[0m" << std::endl;
}
