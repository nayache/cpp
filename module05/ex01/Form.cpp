/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:50 by nayache           #+#    #+#             */
/*   Updated: 2021/10/12 16:04:18 by nayache          ###   ########.fr       */
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
_signed(false)
{
	try
	{
		if (requiredToSign < 0)
			throw Form::GradeTooHighException();
		else if (requiredToSign > 150)
			throw Form::GradeTooLowException();
		else
		{
			this->_requiredToSign = requiredToSign;
			this->_requiredToExec = requiredToExec;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		this->_requiredToSign = 150;
		this->_requiredToExec = 150;
	}
}

Form::Form(Form const& src)
{
	*this = src;
}

Form::~Form()
{

}

Form&	Form::operator=(Form const& src)
{
	this->_signed = src.getSigned();
	this->_requiredToSign = src.getRequiredToSign();
	this->_requiredToExec = src.getRequiredToExec();

	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Form const& src)
{
	os << "\033[1;45m(Form)" << src.getName() << ":\033[0m";
	os << "\033[0m required grade (";
	os << "\033[1;33m" << src.getRequiredToSign() << "\033[0m)";
	return (os);
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

Form&	Form::beSigned(Bureaucrat const& src)
{
	if (src.getGrade() <= this->getRequiredToSign())
		this->_signed = true;
	return (*this);
}
