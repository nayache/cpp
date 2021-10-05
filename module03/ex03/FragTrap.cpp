/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:58:09 by nayache           #+#    #+#             */
/*   Updated: 2021/09/30 13:44:45 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Constructor Frag(default) has been called: " << this << std::endl;
	this->_hitpts = 100;
	this->_energypts = 100;
	this->_attackdmg = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor Frag(" << name << ") has been called: " << this << std::endl;
	this->_hitpts = 100;
	this->_energypts = 100;
	this->_attackdmg = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "Constructor Frag(Copy) has been called: " << this << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Frag has been called: " << this << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & src)
{
	this->_name = src._name;
	this->_hitpts = src._hitpts;
	this->_energypts = src._energypts;
	this->_attackdmg = src._attackdmg;
	return (*this);
}

void	FragTrap::attack(std::string const & target)
{
	if (this->_hitpts < 30)
		return;
	this->_hitpts -= 30;
	std::cout << "\033[1;3;32m" << this->_name << "\33[0m attack " << "\033[1;3;33m" << target << "\033[0m";
	std::cout << " with a big punch in her face and causing \033[1;33m" << this->_attackdmg << "\033[0m points of damage!" << std::endl;
}

void	FragTrap::highFivesGuy()
{
	std::cout << "\033[1;3;32m" << this->_name << "\033[0m said \"";
	std::cout << "\033[1;39mGIVE ME FIVES !\033[0m\"" << std::endl;
}
