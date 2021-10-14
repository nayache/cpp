/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:51:43 by nayache           #+#    #+#             */
/*   Updated: 2021/10/14 09:33:59 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	const	Animal*	array[8];
	
	for (int i = 0; i < 8; i++)
	{
		if (i < 4)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	
	for (int i = 0; i < 8; i++)
	{
		array[i]->printMyIdeas();
		delete array[i];
	}
	
	return (0);
}
