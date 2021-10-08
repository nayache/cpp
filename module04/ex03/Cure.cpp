/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:56:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 11:29:43 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
//	std::cout << "Cure Constructor has been called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src.getType())
{

}

Cure&	Cure::operator=(Cure const & src)
{
	this->AMateria::operator=(src);

	return (*this);
}

Cure::~Cure()
{
//	std::cout << "Cure Destructor has been called" << std::endl;
}

std::string const & Cure::getType() const
{
	return (this->type);
}

AMateria* Cure::clone(void) const
{
	AMateria*	clone = new Cure();

	return (clone);
};

void	Cure::use(ICharacter& target)
{
	this->AMateria::use(target);
}
