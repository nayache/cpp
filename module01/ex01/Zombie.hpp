/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:36:53 by nayache           #+#    #+#             */
/*   Updated: 2021/08/16 16:06:53 by nayache          ###   ########.fr       */
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
	std::string			getName(void) const;
	void				announce(std::string name) const;

	private:

	std::string _name;
};

#endif
