/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:14:59 by nayache           #+#    #+#             */
/*   Updated: 2021/08/17 17:04:49 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type) : _type(type)
{

}

const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}
