/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:22:28 by nayache           #+#    #+#             */
/*   Updated: 2021/08/30 16:42:33 by smith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void	replace(std::string name, std::string s1, std::string s2);

static bool	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static bool	is_alphanumeric(char c)
{
	return (is_alpha(c) || (c >= '0' && c <= '9'));
}

static bool	str_is_alphanumeric(std::string str)
{
	int i(0);
	int	count(0);
	int	size = str.size();

	while (i < size)
	{
		if (is_alphanumeric(str[i]) == 1)
			count++;
		i++;
	}
	return (count > 0);
}

static bool	check_args(char **av, int size)
{
	int i(0);

	while (i < size)
	{
		std::string	copy(av[i]);

		if (i == 0)
		{
			int j(0);
			
			while (copy[j] == ' ' || copy[j] == '\t')
				j++;
			if (is_alpha(copy[j]) == 0)
				return (0);
		}
		if (str_is_alphanumeric(copy) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (check_args(av + 1, ac - 1) == 0)
		{
			std::cout << "\033[31mError arguments\033[0m" << std::endl;
			return (0);
		}
		std::string s1(av[2]), s2(av[3]);
		if (s1.compare(s2) != 0)
			replace(std::string(av[1]), s1, s2);
	}
	return (0);
}
