/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:42:03 by nayache           #+#    #+#             */
/*   Updated: 2021/08/17 18:20:50 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <algorithm>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _Weapon(weapon)
{

}

static std::string	upperStr(std::string str)
{
	std::string copy(str);
	
	transform(copy.begin(), copy.end(), copy.begin(), ::toupper); 	
	return (copy);
}

void	HumanA::attack(void)
{
	std::cout << upperStr(_name) << " attacks with his " << upperStr(_Weapon.getType());
	std::cout << std::endl;
}
