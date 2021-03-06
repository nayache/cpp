/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:44:04 by nayache           #+#    #+#             */
/*   Updated: 2021/09/06 17:55:09 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Zombie*	Chump;
	
	Chump = newZombie("John");
	Chump->announce(Chump->getName());
	if (ac > 1)
	{
		while (--ac > 0)
			randomChump(av[ac]);
	}
	delete Chump;
	return (0);
}
