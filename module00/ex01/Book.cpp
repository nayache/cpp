/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:57:11 by nayache           #+#    #+#             */
/*   Updated: 2021/08/16 14:17:07 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Book::Book()
{
	contacts_saved = 0;
}

Book::~Book()
{

}

void	Book::add_contact(std::string info[5])
{
	List[contacts_saved] = Contact(info);
	contacts_saved += 1;
	std::cout << "\e[32mContact saved successfully on PhoneBook.\e[0;38m";
	std::cout << std::endl << std::endl;
}

int		Book::get_contacts_saved(void) const
{
	return (contacts_saved);
}

void	Book::print_contact(int index) const
{
	List[index].print();	
}

void	Book::print(void) const
{
	int i;
	std::string info;

	std::cout << "\e[1;33m";
	std::cout << "|   INDEX  |FIRST NAME|LAST  NAME| NICKNAME |" << std::endl;
	std::cout << "\e[0;38m";
	i = 0;
	while (i < contacts_saved)
	{
		List[i].preview(i);
		i++;
	}
	std::cout << std::endl;
}
