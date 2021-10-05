/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 09:19:52 by nayache           #+#    #+#             */
/*   Updated: 2021/09/30 14:01:49 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), _gateKeeperMode(false)
{
	this->_hitpts = 100;
	this->_energypts = 50;
	this->_attackdmg = 20;
	std::cout << "Constructor Scav(default) has been called: " << this << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _gateKeeperMode(false)
{
	this->_hitpts = 100;
	this->_energypts = 50;
	this->_attackdmg = 20;
	std::cout << "Constructor Scav (" << name << ") has been called: " << this << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "Constructor Scav (Copy) has been called: " << this << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Scav has been called:" << this << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & src)
{
	this->_name = src._name;
	this->_hitpts = src._hitpts;
	this->_energypts = src._energypts;
	this->_attackdmg = src._attackdmg;
	this->_gateKeeperMode = false;
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->_hitpts < 25)
		return;
	this->_hitpts -= 25;
	std::cout << "\033[1;3;32m" << this->_name << "\33[0m attack " << "\033[1;3;33m" << target << "\033[0m";
	std::cout << " with a magic spell and causing \033[1;33m" << this->_attackdmg << "\033[0m points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_gateKeeperMode == true)
		return;
	this->_gateKeeperMode = true;
	std::cout << "\033[1;3;32m" << this->_name << "\033[0m has entered \033[1;36mGate keeper\033[0m mode.";
	std::cout << std::endl;
}
