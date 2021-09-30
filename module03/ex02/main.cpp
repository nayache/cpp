/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:46:29 by nayache           #+#    #+#             */
/*   Updated: 2021/09/30 12:22:58 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	charles("Charles");
	FragTrap	john("John");
	FragTrap	unknow;


	unknow.attack(charles.getName());
	charles.takeDamage(30);
	unknow.attack(charles.getName());
	charles.takeDamage(30);
	unknow.attack(charles.getName());
	charles.takeDamage(30);
	
	unknow.highFivesGuy();
	
	john.attack(charles.getName());
	charles.takeDamage(30);

	unknow.printCharacteristics();
	charles.printCharacteristics();
	john.printCharacteristics();
	return (0);
}
