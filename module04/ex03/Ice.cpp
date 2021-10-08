/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:56:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 11:29:54 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice Constructor has been called" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src.getType())
{

}

Ice&	Ice::operator=(Ice const & src)
{
	this->AMateria::operator=(src);

	return (*this);
}

Ice::~Ice()
{
	//std::cout << "Ice Destructor has been called" << std::endl;
}

std::string const & Ice::getType() const
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
