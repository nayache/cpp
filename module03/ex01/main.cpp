/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:46:29 by nayache           #+#    #+#             */
/*   Updated: 2021/09/30 11:55:39 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	charles("Charles");
	ScavTrap	johnny("Johnny");
	ScavTrap	unknow;

	charles.guardGate();
	charles.attack(johnny.getName());
	johnny.takeDamage(20);
	charles.attack(johnny.getName());
	johnny.takeDamage(20);
	
	unknow.attack(johnny.getName());
	johnny.takeDamage(20);

	charles.printCharacteristics();		
	johnny.printCharacteristics();		
	return (0);
}
