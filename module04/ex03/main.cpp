/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:05:22 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 10:24:20 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	ICharacter*	smith = new Character("Smith");
	ICharacter*	neo = new Character("Neo");

	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	
	AMateria*	tmp;
	tmp = src->createMateria("ice");
	smith->equip(tmp);
	tmp = src->createMateria("cure");
	smith->equip(tmp);
	tmp = src->createMateria("cure");
	smith->equip(tmp);
	tmp = src->createMateria("roc");
	smith->equip(tmp);
	tmp = src->createMateria("cure");
	smith->equip(tmp);
	tmp = src->createMateria("cure");
	smith->equip(tmp);

	smith->unequip(2);
	
	smith->use(0, *neo);
	smith->use(1, *neo);
	smith->use(1, *neo);
	
	delete smith;
	delete neo;
	delete src;
	return (0);
}
