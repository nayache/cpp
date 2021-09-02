/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:46:29 by nayache           #+#    #+#             */
/*   Updated: 2021/09/02 13:27:44 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

static int	occurence(std::string level)
{
	const std::string	nameFunction[4] = {"debug", "info", "warning", "error"};
	const std::string	upperNameFunction[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i(0);

	while (i < 4)
	{
		if (level.compare(nameFunction[i]) == 0 || level.compare(upperNameFunction[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}

int	main(int ac, char **av)
{
	Karen	instance;
	int		index;
	
	if (ac != 2)
		return (0);
	index = occurence(av[1]);
	switch (index) {
		case 0:
			instance.complain("DEBUG");
		case 1:
			instance.complain("INFO");
		case 2:
			instance.complain("WARNING");
		case 3:
			instance.complain("ERROR");
			break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl;
	}
	return (0);
}
