/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:02:17 by nayache           #+#    #+#             */
/*   Updated: 2021/08/16 16:20:52 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

Zombie	*zombieHorde(int N, std::string name);

int	main(int ac, char **av)
{
	Zombie*	Horde;
	
	if (ac == 3)
	{
		if (atoi(av[1]) < 1)
			return (0);
		Horde = zombieHorde(atoi(av[1]), av[2]);
	}
	else
		Horde = zombieHorde(4, "Bill");
	delete [] Horde;
	return (0);
}
