/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:00:12 by nayache           #+#    #+#             */
/*   Updated: 2021/10/18 11:50:32 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("learner"), _grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src.getName()), _grade(src.getGrade())
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
	os << "\033[1;44m(Bureaucrat)" << src.getName() << ":\033[0m grade : ";
	os << "\033[1;34m" << src.getGrade() << "\033[0m";
	return (os);
}

Bureaucrat&		Bureaucrat::operator++(void)
{
	if (this->getGrade() > 1)
	{
		std::cout << "\e[1;38m" << this->_name << "\e[0m increase his grade!";
		std::cout << "\e[32m :)\e[0m" << std::endl;
		this->_grade--;
	}
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
	{
		std::cout << "\e[1;38m" << this->_name << "\e[0m decrease his grade!";
		std::cout << "\e[31m :(\e[0m" << std::endl;
		this->_grade++;
	}
	return (*this);
}

Bureaucrat		Bureaucrat::operator--(int)
{
	Bureaucrat	tmp(*this);

	--*this;
	return (tmp);
}

void			Bureaucrat::upGrade(void)
{
	++*this;
}

void			Bureaucrat::downGrade(void)
{
	--*this;
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[1;31mGrade specified too high!\033[0m");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mGrade specified too low!\033[0m");
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
