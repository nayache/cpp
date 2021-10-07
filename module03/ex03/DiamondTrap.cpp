/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:46:13 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 07:18:10 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "DIAMOND";
	this->_hitpts = FragTrap::_hitpts;
	this->_energypts = ScavTrap::_energypts;
	this->_attackdmg = FragTrap::_attackdmg;
	std::cout << "Constructor Diamond(default) has been called: " << this << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	this->ClapTrap::_name = name;
	this->ClapTrap::_name.insert(this->ClapTrap::_name.size(), "_clap_name");
	this->_hitpts = FragTrap::_hitpts;
	this->_energypts = ScavTrap::_energypts;
	this->_attackdmg = FragTrap::_attackdmg;
	std::cout << "Constructor Diamond(name) has been called: " << this << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor Diamant has been called: " << this << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\033[1;3;32m" << this->_name << ": \033[0m";
	std::cout << "\"my name is \033[1;3;32m" << this->_name << "\033[0m";
	std::cout << " and my clap_name is \033[1;3;32m" << this->ClapTrap::_name;
	std::cout << "\033[0m\"" << std::endl;
}
