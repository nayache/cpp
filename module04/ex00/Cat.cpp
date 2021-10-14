/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:55:55 by nayache           #+#    #+#             */
/*   Updated: 2021/10/14 10:07:17 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor has been called" << std::endl;
}

Cat::Cat(Cat const & src)
{
	this->type = src.getType();
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "\033[3;33m" << "\"Miaaouuw !\"\033[0m" << std::endl;
}

Cat&	Cat::operator=(Cat const & src)
{
	this->type = src.getType();
	return (*this);
}
