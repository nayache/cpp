/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:23:46 by nayache           #+#    #+#             */
/*   Updated: 2021/10/25 15:53:47 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	
	Convert test(static_cast<std::string>(av[1]));
	
	test.printValues();	
	
	return (0);
}
