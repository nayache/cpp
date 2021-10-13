/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:55:55 by nayache           #+#    #+#             */
/*   Updated: 2021/10/13 12:31:40 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor has been called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src.getType())
{
	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "\033[3;36m" << "\"Miaaouuw !\"\033[0m" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & src)
{
	this->WrongAnimal::operator=(src);

	return (*this);
}
