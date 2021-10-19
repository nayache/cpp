/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:36:38 by nayache           #+#    #+#             */
/*   Updated: 2021/10/19 11:02:05 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:

	PresidentialPardonForm(std::string const& target);
	PresidentialPardonForm(PresidentialPardonForm const& src);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
	
	std::string	getTarget() const;
	virtual void execute(Bureaucrat const& executor) const;

	private:
		
		PresidentialPardonForm();
		std::string _target;
};

#endif
