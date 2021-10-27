/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:41:57 by nayache           #+#    #+#             */
/*   Updated: 2021/10/27 20:40:15 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

void	identify(Base& p)
{
	Base	test;
	char	c = 'A';

	try {
		test = dynamic_cast<A&>(p);
	}
	catch (std::exception& e) {
	}
	try {
		test = dynamic_cast<B&>(p);
		c = 'B';
	}
	catch (std::exception& e) {
	}
	try {
		test = dynamic_cast<C&>(p);
		c = 'C';
	}
	catch (std::exception& e) {
	}
	(void)p;
	std::cout << "indentify(Base&): " << c << std::endl;
}

void	identify(Base* p)
{
	Base *test;
	char c = 'A';

	test = dynamic_cast<A*>(p);
	
	if (test == NULL)
	{
		test = dynamic_cast<B*>(p);
		c = 'B';
	}
	
	if (test == NULL)
	{
		test = dynamic_cast<C*>(p);
		c = 'C';
	}
	(void)p;
	std::cout << "indentify(Base*): " << c << std::endl;
}

Base*	generate(void)
{
	std::string const type[3] = {"A" , "B", "C"};
	Base*	randomBase;
	
	srand(time(NULL));
	int	randomNb = rand() % 3;

	switch (randomNb)
	{
		case 0:
			randomBase = new A;
			break;
		
		case 1:
			randomBase = new B;
			break;
		
		case 2:
			randomBase = new C;
			break;
	}
	std::cout << "Class " << type[randomNb] << " has been created" << std::endl;
	return (randomBase);
}

int	main(void)
{
	Base* test = generate();
	identify(test);
	identify(*test);

	delete test;
	return (0);
}
