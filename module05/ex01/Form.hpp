/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:14:19 by nayache           #+#    #+#             */
/*   Updated: 2021/10/12 15:57:31 by nayache          ###   ########.fr       */
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
	~Form();
	Form&	operator=(Form const& src);

	std::string		getName(void) const;
	bool			getSigned(void) const;
	unsigned int	getRequiredToSign(void) const;
	unsigned int	getRequiredToExec(void) const;
	
	Form&	beSigned(Bureaucrat const& src);
	
	class	GradeTooHighException : public std::exception
	{
		public:

		const char *what() const throw()
		{
			return ("\033[1;3;33mForm grade specified is too high!\033[0m");
		}
	};

	class	GradeTooLowException : public std::exception
	{
		public:

		const char *what() const throw()
		{
			return ("\033[1;3;33mForm grade specified is too low!\033[0m");
		}
	};
	
	private:

	std::string		_name;
	bool			_signed;
	unsigned int	_requiredToSign;
	unsigned int	_requiredToExec;
};

std::ostream&	operator<<(std::ostream& os, Form const& src);

#endif
