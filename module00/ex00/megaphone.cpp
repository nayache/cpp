/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:08:41 by nayache           #+#    #+#             */
/*   Updated: 2021/08/11 17:18:46 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static bool	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

static void	low_to_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (is_alpha(*str) == 1)
			*str = *str - 32;
		str++;
	}
}

int		main(int ac, char **av)
{
	int	i(1);

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < ac)
		{
			low_to_uppercase(av[i]);
			std::cout << av[i];
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
