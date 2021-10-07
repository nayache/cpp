/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:42:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 10:38:34 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
	std::string	kinds[3] = {"\033[0;32mGood\033[0m", "\033[0;33mBad\033[0m", "Empty"};

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = kinds[rand() % 3];

	std::cout << "Brain constructor has been called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
}

Brain::~Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
	std::cout << "Brain destructor has been called" << std::endl;
}

Brain&	Brain::operator=(Brain const & src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
		
	return (*this);
}

std::string	Brain::getIdea(unsigned int index) const
{
	return (this->_ideas[index]);
}
