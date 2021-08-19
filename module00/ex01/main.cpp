/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:08:25 by nayache           #+#    #+#             */
/*   Updated: 2021/08/16 10:43:55 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.hpp"
#include "Contact.hpp"
#include <iostream>

bool	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

bool	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

bool	string_is_alpha(std::string str)
{
	int i = 0;
	int	alpha_count = 0;

	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) == 1)
			alpha_count++;
		else if (is_space(str[i]) == 0)
			return (0);
		i++;
	}
	return (alpha_count > 0);
}

bool	string_is_numeric(std::string str)
{
	int i = 0;
	int num_count = 0;

	while (str[i] != '\0')
	{
		if (is_numeric(str[i]) == 1)
			num_count++;
		else if (is_space(str[i]) == 0)
			return (0);
		i++;
	}
	return (num_count > 0);
}

void	interaction_message(int index)
{
	const std::string message[5] = {"Enter *first name", "Enter *last name",
	"Enter nickname", "Enter *phone number", "Enter darkest secret"};

	std::cout << "\e[1;40m" << message[index] << " \e[5;40m:\e[0;38m ";
}

void	add_interaction(Book& Phonebook)
{
	std::string			info[5];
	int					i = 0;

	while (i < 5)
	{
		while (info[i].empty())
		{
			interaction_message(i);
			getline(std::cin, info[i]);
			if ((i == 0 || i == 1) && !string_is_alpha(info[i]))
			{
				std::cout << "\e[3;31mmore than zero character expected, please retry\e[0;38m";
				std::cout << std::endl;
				info[i] = "";
			}
			if (i == 3 && !string_is_numeric(info[i]))
			{
				std::cout << "\e[3;31monly numbers expected, please retry\e[0;38m";
				std::cout << std::endl;
				info[i] = "";
			}
			if (i == 4)
				break;
			if (i == 2)
				i++;
		}
		i++;
	}
	Phonebook.add_contact(info);
}

bool	error_input(std::string str, int size)
{
	if (str.size() != 1)
		std::cout << "\e[3;31mError: wrong index\n\e[0;38m" << std::endl;
	else if (!(str[0] >= '0' && str[0] < size + 48))
		std::cout << "\e[3;31mError: wrong index\n\e[0;38m" << std::endl;
	else
		return (0);
	return (1);
}

int	main(void)
{
	std::string			input;
	Book				Phonebook;

	while (input.compare("EXIT") != 0)
	{
		std::cout << "\e[1;36m(MENU) press ADD or SEARCH or EXIT\e[0;38m" << std::endl;
		std::cin >> input;
		std::cin.ignore();
		if (input.compare("ADD") == 0)
		{
			if (Phonebook.get_contacts_saved() < 8)
				add_interaction(Phonebook);
			else
				std::cout << "no nore space in PhoneBook, sorry" << std::endl;
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (Phonebook.get_contacts_saved() > 0)
			{
				Phonebook.print();
				std::cout << "which contact index would you like to consult?: ";
				getline(std::cin, input);
				if (error_input(input, Phonebook.get_contacts_saved()) == 0)
					Phonebook.print_contact(input[0] - 48);
			}
			else
				std::cout << "Zero contact is saved in PhoneBook" << std::endl;
		}
	}
	return (0);
}
