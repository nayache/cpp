/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:55:55 by nayache           #+#    #+#             */
/*   Updated: 2021/10/14 09:30:57 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor has been called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const& src)
{
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "\033[3;38m" << "\"Woof Woof !\"\033[0m" << std::endl;
}

Dog&	Dog::operator=(Dog const & src)
{
	*(this->_brain) = *(src._brain);
	return (*this);
}

void	Dog::printMyIdeas(void) const
{
	std::cout << "\033[1;45m----IN-----DOG-----BRAIN------------------------\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << this->_brain->getIdea(i);
		if (i != 0 && i % 10 == 0)
			std::cout << std::endl;
		else
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << "\033[1;45m------------------------------------------------\033[0m" << std::endl;
}
