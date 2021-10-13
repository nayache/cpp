/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:03:07 by nayache           #+#    #+#             */
/*   Updated: 2021/10/13 12:27:05 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor(default) has been called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal Constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor has been called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & src)
{
	this->type = src.type;

	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "\033[3;36m\"RRRRRRRRRRHHH\"\033[0m" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
