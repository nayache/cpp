/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:56:42 by nayache           #+#    #+#             */
/*   Updated: 2021/10/12 14:10:08 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

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
	
	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	
	class	GradeTooHighException : public std::exception
	{
		public:

		const char	*what() const throw()
		{
			return ("\033[1;31mGrade specified too high!\033[0m");
		}
	};

	class	GradeTooLowException : public std::exception
	{
		public:

		const char	*what() const throw()
		{
			return ("\033[1;31mGrade specified too low!\033[0m");
		}
	};

	private:

	const std::string	_name;
	unsigned int		_grade;
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& src);

#endif
