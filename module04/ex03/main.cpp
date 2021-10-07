/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:05:22 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 15:37:10 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int	main(void)
{
	ICharacter*	a = new Character("Smith");
	ICharacter*	b = new Character("Neo");

	delete a;
	delete b;
	return (0);
}
