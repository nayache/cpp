/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:55:55 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 10:34:34 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor has been called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "\033[3;38m" << "\"Miaaouuw !\"\033[0m" << std::endl;
}

Cat&	Cat::operator=(Cat const & src)
{
	this->Animal::operator=(src);

	return (*this);
}

void	Cat::printMyIdeas(void) const
{
	std::cout << "\033[1;45m----IN-----CAT-----BRAIN------------------------\033[0m" << std::endl;
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
