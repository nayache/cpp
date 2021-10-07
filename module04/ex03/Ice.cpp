/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:56:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 15:36:44 by nayache          ###   ########.fr       */
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

AMateria* Ice::clone(void) const
{
	AMateria*	clone = new Ice();

	return (clone);
};
