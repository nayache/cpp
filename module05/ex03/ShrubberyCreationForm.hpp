/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:48:39 by nayache           #+#    #+#             */
/*   Updated: 2021/10/18 13:56:47 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class	ShrubberyCreationForm : public Form
{
	public:

	ShrubberyCreationForm(std::string const& target);
	ShrubberyCreationForm(ShrubberyCreationForm const& src);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& src);
	
	virtual void execute(Bureaucrat const& executor) const;
	
	private:

	std::string _target;	
};

#endif
