/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:36:55 by nayache           #+#    #+#             */
/*   Updated: 2021/09/30 12:20:54 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknow"), _hitpts(10), _energypts(100), _attackdmg(0)
{
	std::cout << "Constructor(default) has been called: " << this << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpts(10), _energypts(100), _attackdmg(0)
{
	std::cout << "Constructor(" << name << ") has been called: " << this << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Constructor(Copy) has been called: " << this << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called: " << this << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & src)
{
	this->_name = src._name;
	this->_hitpts = src._hitpts;
	this->_energypts = src._energypts;
	this->_attackdmg = src._attackdmg;
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::printCharacteristics()
{
	std::cout << "\033[1;40m" << this->_name << " (" << this << ") \033[0m" << std::endl;
	std::cout << "- " << this->_hitpts << " hit points" << std::endl;
	std::cout << "- " << this->_energypts << " energy points" << std::endl;
	std::cout << "- " << this->_attackdmg << " attack damage" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hitpts < 5)
		return;
	this->_hitpts -= 5;
	std::cout << "\033[1;3;32m" << this->_name << "\33[0m attack " << "\033[1;3;33m" << target << "\033[0m";
	std::cout << ", causing \033[1;33m" << this->_attackdmg << "\033[0m points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energypts == 0)
		return;
	
	int	finalDamages = ((this->_energypts - (int)amount) < 0) ? this->_energypts : amount;
	
	this->_energypts -= finalDamages;
	std::cout << "\033[1;3;32m" << this->_name << "\33[0m has lost \033[1;33m" << finalDamages << "\033[0m energy points!";
	std::cout << std::endl;
	
	if (this->_energypts == 0)
		std::cout << "\033[1;3;32m" << this->_name << "\33[1;31m is dead! \033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	energyRepaired = this->_energypts + amount > 100 ? 100 - this->_energypts : amount;
	std::cout << "\033[1;3;32m" << this->_name << "\033[0m has been repaired from \033[1;32m" << energyRepaired << "\033[0m energy points." << std::endl;
	this->_energypts += amount;
	if (this->_energypts > 100)
		this->_energypts = 100;
}
