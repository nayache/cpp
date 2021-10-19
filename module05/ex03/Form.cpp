/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:50 by nayache           #+#    #+#             */
/*   Updated: 2021/10/19 12:34:37 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form() : _name("basic"), _signed(false), _requiredToSign(150), _requiredToExec(150)
{
	
}

Form::Form(std::string name) : _name(name), _signed(false), _requiredToSign(150),
_requiredToExec(150)
{

}

Form::Form(std::string name, int requiredToSign, int requiredToExec) : _name(name),
_signed(false), _requiredToSign(requiredToSign), _requiredToExec(requiredToExec)
{
	if (requiredToSign < 0 || requiredToExec < 0)
		throw Form::GradeTooHighException();
	else if (requiredToSign > 150 || requiredToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& src) : _name(src.getName()), _signed(src.getSigned()),
_requiredToSign(src.getRequiredToSign()), _requiredToExec(src.getRequiredToExec())
{
	if (this->_requiredToSign < 0 || this->_requiredToExec < 0)
		throw Form::GradeTooHighException();
	else if (this->_requiredToSign > 150 || this->_requiredToExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

Form&	Form::operator=(Form const& src)
{
	this->_signed = src.getSigned();

	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Form const& src)
{
	os << "\033[1;45m(Form)" << src.getName() << ":\033[0m";
	os << "\033[0m required grade to sign (";
	os << "\033[1;35m" << src.getRequiredToSign() << "\033[0m) | to execute (";
	os << "\033[1;35m" << src.getRequiredToExec() << "\e[0m)";
	if (src.getSigned() == true)
		os << "\e[3;32m   signed\e[0m";
	return (os);
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("\033[33m(Exception)grade is too low!\033[0m");
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("\033[33m(Exception)grade is too high!\033[0m");
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

unsigned int	Form::getRequiredToSign() const
{
	return (this->_requiredToSign);
}

unsigned int	Form::getRequiredToExec() const
{
	return (this->_requiredToExec);
}

void	Form::beSigned(Bureaucrat const& src)
{
	if (this->_signed == true)
		throw std::runtime_error("\e[33m(Exception)is already signed\e[0m");
	else if (src.getGrade() > this->getRequiredToSign())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

void	Form::execute(Bureaucrat const& executor) const
{
	if (this->getSigned() == false)
	{
		throw std::runtime_error("\e[33mis not signed\e[0m");
	}
	else if (executor.getGrade() > this->getRequiredToExec())
	{
		throw Form::GradeTooLowException();
	}
}
