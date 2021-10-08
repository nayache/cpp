/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:25:50 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 11:29:13 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
//	std::cout << "Character constructor has been called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
//	std::cout << "Character destructor has been called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}	

Character::Character(Character const & src)
{
	this->_name = src.getName();
	
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i] == NULL)
			this->_inventory[i] = NULL;
		else
			this->_inventory[i] = src._inventory[i]->clone();
	}
}

Character&	Character::operator=(Character const & src)
{
	if (this == &src)
		return (*this);
	
	this->~Character();
	this->_name = src.getName();
	
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i] == NULL)
			this->_inventory[i] = NULL;
		else
			this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}

std::string	const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* src)
{
	if (src == NULL)
		return;
	std::string srcType = src->getType();

	if (srcType.compare("ice") != 0 && srcType.compare("cure") != 0)
		return;
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{	
			this->_inventory[i] = src;
			std::cout << "\033[1;40mInventory(" << this->_name << "):\033[0m"; 
			std::cout << "\033[1;32m location " << i << " -> (Materia " << src->getType() << ") ";
			std::cout << "was equiped ! :)\033[0m" << std::endl;
			printInventory(i);
			return;
		}
	}
	std::cout << "\033[1;40mInventory(" << this->_name << "):\033[0m"; 
	std::cout << "\033[1;31m impossible to equip another Materia, no more available locations..\033[0m" << std::endl;
}

void	Character::unequip(int index)
{
	if (!(index >= 0 && index < 4) || this->_inventory[index] == NULL)
		return;
	
	std::string currentType = this->_inventory[index]->getType();
	if (currentType.compare("ice") == 0 || currentType.compare("cure") == 0)
	{
		this->_inventory[index] = NULL;
		std::cout << "\033[1;40mInventory(" << this->_name << "):\033[0m";
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
		
		if (this->_inventory[i] != NULL)
		{
			if (i == index)
				std::cout << "\033[0;32m" << this->_inventory[i]->getType() << "\033[0m";
			else
				std::cout << this->_inventory[i]->getType();
		}
		std::cout << std::endl;
	}
	
	std::cout << "---------------------" << std::endl;
}

void	Character::use(int index, ICharacter& target)
{
	if (this->_inventory[index] == NULL)
		return;
	std::string type = this->_inventory[index]->getType();
	if (type.compare("ice") != 0 && type.compare("cure") != 0)
		return;

	std::cout << "\033[1;38m" << this->getName() << " \033[0m";

	this->_inventory[index]->use(target);

	delete this->_inventory[index];	
	this->_inventory[index] = NULL;
}
