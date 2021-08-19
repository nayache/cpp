/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:54:18 by nayache           #+#    #+#             */
/*   Updated: 2021/08/17 18:23:49 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <algorithm>

HumanB::HumanB(std::string name) : _name(name)
{

}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_Weapon = &weapon;
}

static std::string	upperStr(std::string str)
{
	std::string copy(str);
	
	transform(copy.begin(), copy.end(), copy.begin(), ::toupper); 	
	return (copy);
}

void	HumanB::attack(void)
{
	std::cout << upperStr(_name) << " attacks with his " << upperStr(_Weapon->getType());
	std::cout << std::endl;
}
