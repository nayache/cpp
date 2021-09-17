/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:39:36 by nayache           #+#    #+#             */
/*   Updated: 2021/09/06 17:43:03 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name) : _name(name)
{

}

Zombie::~Zombie()
{
	announce(getName());
}

void	Zombie::setName(std::string name)
{
	if (!name.empty())
		this->_name = name;
	else
		this->_name = "Unknow";
}

std::string	Zombie::getName(void) const
{
	return (this->_name);
}

void		Zombie::announce(std::string name) const
{
	std::cout << "<" << name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
