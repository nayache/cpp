/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:44:27 by nayache           #+#    #+#             */
/*   Updated: 2021/10/27 19:36:25 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t serial = reinterpret_cast<uintptr_t>(ptr);

	return (serial);
}

Data*	deserialize(uintptr_t raw)
{
	Data* deserial = reinterpret_cast<Data*>(raw);

	return (deserial);
}

int	main()
{
	Data* data = new Data();
	data->test = "Hello";
	data->nb = 42;
	std::cout << data << std::endl;

	uintptr_t result = serialize(data);
	
	Data* tmp = deserialize(result);
	
	std::cout << tmp << std::endl;
	std::cout << tmp->test << std::endl;
	std::cout << tmp->nb << std::endl;
	
	delete data;

	return (0);
}
