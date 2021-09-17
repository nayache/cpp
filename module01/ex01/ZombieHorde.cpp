/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:00:11 by nayache           #+#    #+#             */
/*   Updated: 2021/09/06 17:43:34 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdio.h>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	Horde = new Zombie[N];
	
	while (--N >= 0)
		Horde[N].setName(name);
	return (Horde);
}
