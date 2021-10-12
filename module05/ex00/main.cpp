/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:28:36 by nayache           #+#    #+#             */
/*   Updated: 2021/10/12 13:33:07 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	charles("charles", 151);
	Bureaucrat	georges("georges", 0);
	Bureaucrat	john("john", 1);

	std::cout << charles++;
	std::cout << charles;
	std::cout << ++charles;
	std::cout << john--;
	std::cout << john;
	return (0);
}
