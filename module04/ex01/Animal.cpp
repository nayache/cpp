/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:03:07 by nayache           #+#    #+#             */
/*   Updated: 2021/10/14 09:34:27 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor(default) has been called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal Constructor has been called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor has been called" << std::endl;
}

Animal&	Animal::operator=(Animal const & src)
{
	this->type = src.type;

	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "\033[3;38m\"..\"\033[0m" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::printMyIdeas() const
{
}
