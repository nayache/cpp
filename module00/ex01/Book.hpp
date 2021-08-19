/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:36:20 by nayache           #+#    #+#             */
/*   Updated: 2021/08/16 14:16:40 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBOOK_HPP
# define CLASSBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class	Book
{
	public:

	Book();
	~Book();
	void	add_contact(std::string info[5]);
	void	print_contact(int index) const;
	void	print(void) const;
	int		get_contacts_saved(void) const;
	
	private:
	
	Contact	List[8];
	int		contacts_saved;
};

#endif
