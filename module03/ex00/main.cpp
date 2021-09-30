/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:46:29 by nayache           #+#    #+#             */
/*   Updated: 2021/09/30 11:46:23 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Francis("Francis");
	ClapTrap	Unknow;
	ClapTrap	Clone(Francis);

	Francis.attack(Unknow.getName());
	Unknow.takeDamage(0);
	Francis.attack(Unknow.getName());
	Unknow.takeDamage(0);
	Francis.attack(Unknow.getName());
	
	Unknow.attack(Francis.getName());
	Francis.takeDamage(0);
	
	Clone.attack(Francis.getName());
	Francis.takeDamage(0);

	Francis.beRepaired(42);

	Francis.printCharacteristics();
	Unknow.printCharacteristics();
	Clone.printCharacteristics();
	return (0);
}
