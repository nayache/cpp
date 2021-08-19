/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:39:36 by nayache           #+#    #+#             */
/*   Updated: 2021/08/16 15:26:48 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{

}

Zombie::~Zombie()
{
	announce(getName());
}

std::string	Zombie::getName(void) const
{
	return (this->_name);
}

void		Zombie::announce(std::string name) const
{
	std::cout << "<" << name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
