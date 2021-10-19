/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:14:19 by nayache           #+#    #+#             */
/*   Updated: 2021/10/18 13:23:47 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:

	Form();
	Form(std::string name);
	Form(std::string name, int requiredToSign, int requiredToExec);
	Form(Form const& src);
	virtual ~Form();
	Form&	operator=(Form const& src);

	std::string		getName(void) const;
	bool			getSigned(void) const;
	unsigned int	getRequiredToSign(void) const;
	unsigned int	getRequiredToExec(void) const;
	
	void	beSigned(Bureaucrat const& src);
	
	class	GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

	virtual void	execute(Bureaucrat const& src) const;	
	
	private:

	std::string			_name;
	bool				_signed;
	int const	_requiredToSign;
	int const	_requiredToExec;
};

std::ostream&	operator<<(std::ostream& os, Form const& src);

#endif
