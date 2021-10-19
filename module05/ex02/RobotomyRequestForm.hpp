/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:36:38 by nayache           #+#    #+#             */
/*   Updated: 2021/10/18 14:04:09 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:

	RobotomyRequestForm(std::string const& target);
	RobotomyRequestForm(RobotomyRequestForm const& src);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
	
	std::string	getTarget() const;
	virtual void execute(Bureaucrat const& executor) const;

	private:
		
		RobotomyRequestForm();
		std::string _target;
};

#endif
