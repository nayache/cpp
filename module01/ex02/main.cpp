/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:00:44 by nayache           #+#    #+#             */
/*   Updated: 2021/08/17 16:05:16 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string message("HI THIS IS BRAIN");

	std::string& messageRef = message;
	std::string* messagePtr = &message;

	std::cout << &message << std::endl;
	std::cout << &messageRef << std::endl;
	std::cout << messagePtr << std::endl;
	std::cout << messageRef << std::endl;
	std::cout << *messagePtr << std::endl;
	return (0);
}
