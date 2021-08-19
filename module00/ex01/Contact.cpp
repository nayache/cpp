/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:11:17 by nayache           #+#    #+#             */
/*   Updated: 2021/08/16 14:19:14 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Contact::~Contact()
{

}

Contact::Contact()
{

}

Contact::Contact(std::string info[5])
{
	firstname = info[0];	
	lastname = info[1];	
	nickname = info[2];	
	phone_number = info[3];	
	darkest_secret = info[4];	
}

void	Contact::print(void) const
{
	std::cout << std::endl;
	std::cout << "[first name]     : " << firstname << std::endl;
	std::cout << "[last name]      : " << lastname << std::endl;
	std::cout << "[nickname]       : " << nickname << std::endl;
	std::cout << "[phone number]   : " << phone_number << std::endl;
	std::cout << "[darkest secret] : " << darkest_secret << std::endl;
	std::cout << std::endl;
}

void	print_preview_str(std::string str)
{
	std::string	copy(str);
	int			size;

	std::cout << "|";
	size = copy.size();
	if (size > 10)
	{
		copy.replace(9, 1, ".");
		copy.erase(10, size);
	}
	else
		copy.insert(size, 10 - size, ' ');
	std::cout << copy;
}

void	Contact::preview(int index) const
{
	std::cout << "|" << "    " << index << "     ";
	print_preview_str(firstname);
	print_preview_str(lastname);
	print_preview_str(nickname);
	std::cout << "|" << std::endl;
}
