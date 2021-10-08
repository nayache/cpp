/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:49:19 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 10:10:48 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructor(default) has been called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type) 
{
	std::cout << "AMateria constructor has been called" << std::endl;
}

std::string	const &	AMateria::getType(void) const
{
	return (this->type);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor has been called" << std::endl;
}

void	AMateria::use(ICharacter& target)
{
	std::string type = this->getType();
	if (type.compare("ice") != 0 && type.compare("cure") != 0)
		return;

	if (type.compare("ice") == 0)
		std::cout << "\033[1;3;38mSHOOTS AN ICE BOLT at\033[0m \033[1;38m" << target.getName() << " !\033[0m";
	else
		std::cout << "\033[1;3;38mHEALS \033[0m\033[1;38m" << target.getName() << "\033[1;3;38m's wounds.\033[0m";
	std::cout << std::endl;
}
