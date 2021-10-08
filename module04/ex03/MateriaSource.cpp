/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:21:04 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 09:58:28 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource() : _count(0)
{
	std::cout << "MateriaSource constructor has been called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor has been called" << std::endl;
	for (unsigned int i = 0; i < this->_count; i++)
		delete this->_learned[i];
}

void	MateriaSource::learnMateria(AMateria* src)
{
	if (this->_count == 4)
		return;
	
	this->_learned[this->_count] = src;
	this->_count += 1;
	std::cout << "\033[1;36mMateriaSource\033[0m ";
	std::cout << "learned how to make a new element -> ";
	std::cout << "\033[1;3;38m" << src->getType() << "\033[0m" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (unsigned int i = 0; i < this->_count; i++)
	{
		if (type.compare(this->_learned[i]->getType()) == 0)
		{
			if (type.compare("ice") == 0)
				return (new Ice());
			if (type.compare("cure") == 0)
				return (new Cure());
		}
	}
	std::cout << "\033[1;36mMateriaSource:\033[0m \033[1;31mDo not know \"" << type;
	std::cout << "'s Materia\" !\033[0m" << std::endl;
	return (NULL);
}
