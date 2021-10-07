/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:21:04 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 15:39:03 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor has been called" << std::endl;
	
	for (int i = 0; i < 4; i++)
		this->_learned[i] = "";
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor has been called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learned[i].compare("") == 0)
			this->_learned[i] = src->getType();
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	
	for (int i = 0; i < 4; i++)
	{
		if (type.compare(this->_learned[i]) == 0)
		{
			if (type.compare("ice") == 0)
			{
				AMateria* newMateria = new Ice();
				return (newMateria);
			}
			else if (type.compare("cure") == 0)
			{
				AMateria* newMateria = new Cure();
				return (newMateria);
			}

		}
	}
	return (NULL);
}
