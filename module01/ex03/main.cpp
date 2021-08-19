/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:18:16 by nayache           #+#    #+#             */
/*   Updated: 2021/08/17 18:33:04 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon dagger = Weapon("poison dagger");
	HumanA bob("Bob", dagger);
	bob.attack();
	dagger.setType("flaming dagger");
	bob.attack();
	
	Weapon hammer = Weapon("wooden hammer");
	HumanB jim("Jim");
	jim.setWeapon(hammer);
	jim.attack();
	hammer.setType("iron hammer");
	jim.attack();
}
