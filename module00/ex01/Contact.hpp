/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:00:28 by nayache           #+#    #+#             */
/*   Updated: 2021/08/16 14:19:26 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP
# include <iostream>

class	Contact
{
	public:
	
	Contact();
	~Contact();
	Contact(std::string info[5]);
	void	preview(int index) const;	
	void	print(void) const;	

	private:

	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif
