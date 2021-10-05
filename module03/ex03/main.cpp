/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:46:29 by nayache           #+#    #+#             */
/*   Updated: 2021/10/05 14:17:20 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Daryl("Daryl");
	DiamondTrap	Josh("Josh");

	Daryl.whoAmI();
	Daryl.attack("Josh");
	Josh.takeDamage(30);
	Daryl.printCharacteristics();
	Josh.printCharacteristics();
	return (0);
}
