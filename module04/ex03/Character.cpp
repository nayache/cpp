/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:25:50 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 15:34:30 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character constructor has been called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor has been called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		std::string currentType = this->_inventory[i]->getType();
		if (currentType.compare("ice") == 0 || currentType.compare("cure") == 0)
			delete this->_inventory[i];
	}
}

std::string	const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* src)
{
	std::string srcType = src->getType();

	if (srcType.compare("ice") != 0 && srcType.compare("cure") != 0)
		return;
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{	
			this->_inventory[i] = src;
			std::cout << "\033[1;40mInventory:\033[0m"; 
			std::cout << "\033[1;32m location " << i << " -> (Materia " << src->getType() << ") ";
			std::cout << "was equiped ! :)\033[0m" << std::endl;
			printInventory(i);
			break;
		}
	}
}

void	Character::unequip(int index)
{
	std::string currentType = this->_inventory[index]->getType();
	if (currentType.compare("ice") == 0 || currentType.compare("cure") == 0)
	{
		delete this->_inventory[index];
		std::cout << "\033[1;40mInventory:\033[0m"; 
		std::cout << "\033[1;33m location " << index << " -> (Materia " << currentType << ") ";
		std::cout << "was unequiped\033[0m" << std::endl;
		printInventory(index);
	}
}

void	Character::printInventory(int index) const
{
	std::cout << "---------------------" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		std::cout << "| " << i << " - ";
		
		if (i == index)
			std::cout << "\033[0;32m" << this->_inventory[i]->getType() << "\033[0m";
		else
			std::cout << this->_inventory[i]->getType();
		
		std::cout << std::endl;
	}
	
	std::cout << "---------------------" << std::endl;
}

void	Character::use(int index, ICharacter& target)
{
	std::string type = this->_inventory[index]->getType();
	if (type.compare("ice") != 0 && type.compare("cure") != 0)
		return;

	std::cout << "\033[1;38m" << this->getName() << " \033[0m";

	this->_inventory[index]->use(target);

	delete this->_inventory[index];	
}
