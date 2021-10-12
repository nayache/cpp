/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:00:12 by nayache           #+#    #+#             */
/*   Updated: 2021/10/12 15:30:38 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("learner"), _grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		
		else
			this->_grade = grade;
	}
	
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 150;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src.getName()), _grade(src.getGrade())
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& src)
{
	this->_grade = src.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& src)
{
	os << "\033[1;32m" << src.getName() << "\033[0m Bureaucrat grade : ";
	os << "\033[1;33m" << src.getGrade() << "\033[0m";
	return (os);
}

Bureaucrat&		Bureaucrat::operator++(void)
{
	if (this->getGrade() > 1)
		this->_grade--;
	return (*this);
}

Bureaucrat		Bureaucrat::operator++(int)
{
	Bureaucrat	tmp(*this);
	
	++*this;
	return (tmp);
}

Bureaucrat&		Bureaucrat::operator--(void)
{
	if (this->getGrade() < 150)
		this->_grade++;
	return (*this);
}

Bureaucrat		Bureaucrat::operator--(int)
{
	Bureaucrat	tmp(*this);

	--*this;
	return (tmp);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
