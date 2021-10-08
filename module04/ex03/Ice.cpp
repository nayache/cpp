/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:56:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 08:59:30 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Constructor has been called" << std::endl;
}

Ice::Ice(Ice const & src)
{
	this->type = src.getType();
}

Ice::~Ice()
{
	std::cout << "Ice Destructor has been called" << std::endl;
}

std::string const & Ice::getType() const //Returns the materia type
{
	return (this->type);
}

AMateria* Ice::clone(void) const
{
	AMateria*	clone = new Ice();

	return (clone);
};

void	Ice::use(ICharacter& target)
{
	this->AMateria::use(target);
}
