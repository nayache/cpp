/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:41:47 by nayache           #+#    #+#             */
/*   Updated: 2021/09/02 13:41:10 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "\033[1;38m[ DEBUG ]\033[0m" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << "I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "\033[1;38m[ INFO ]\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "\033[1;33m[ WARNING ]\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming here for years and you just started working here last month.";
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "\033[1;31m[ ERROR ]\033[0m" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

static int	occurence(std::string level)
{
	const std::string	nameFunction[4] = {"debug", "info", "warning", "error"};
	const std::string	upperNameFunction[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i(0);

	while (i < 4)
	{
		if (level.compare(nameFunction[i]) == 0 || level.compare(upperNameFunction[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}

void	Karen::complain(std::string level)
{
	Karen	instance;
	void	(Karen::*function[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int		index;

	index = occurence(level);
	if (index != -1)
		(instance.*function[index])();
}
