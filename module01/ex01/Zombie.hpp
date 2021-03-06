/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:36:53 by nayache           #+#    #+#             */
/*   Updated: 2021/09/06 17:40:01 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{
	public:

	Zombie(std::string name);
	Zombie();
	~Zombie();
	void				setName(std::string name);
	std::string			getName(void) const;
	void				announce(std::string name) const;

	private:

	std::string _name;
};

#endif
