/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:53:08 by nayache           #+#    #+#             */
/*   Updated: 2021/10/27 11:48:39 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include <iostream>

class	Intern
{
	public:

	Intern();
	Intern(Intern const& src);
	~Intern();
	Intern&	operator=(Intern const& src);

/*	Form*	createShrubberyCreation(const std::string target);
	Form*	createRobotomyRequest(const std::string target);
	Form*	createPresidentialPardon(const std::string target);*/

	Form*	makeForm(const std::string type, const std::string target);
};

#endif
