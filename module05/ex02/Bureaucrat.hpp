/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:56:42 by nayache           #+#    #+#             */
/*   Updated: 2021/10/18 11:54:35 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public:
	
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& src);
	~Bureaucrat();
	Bureaucrat&	operator=(Bureaucrat const& src);
	Bureaucrat&	operator++(void);
	Bureaucrat	operator++(int);
	Bureaucrat&	operator--(void);
	Bureaucrat	operator--(int);

	void			upGrade(void);	
	void			downGrade(void);	
	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	
	class	GradeTooHighException : public std::exception
	{
		const char	*what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		const char	*what() const throw();
	};

	void	signForm(Form& src);
	void	executeForm(Form const& src);

	private:

	const std::string	_name;
	unsigned int		_grade;
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& src);

#endif
