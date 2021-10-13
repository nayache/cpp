/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:55:55 by nayache           #+#    #+#             */
/*   Updated: 2021/10/13 12:32:14 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor has been called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src.getType())
{

}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "\033[3;33m" << "\"Woof Woof !\"\033[0m" << std::endl;
}

Dog&	Dog::operator=(Dog const & src)
{
	this->Animal::operator=(src);

	return (*this);
}
