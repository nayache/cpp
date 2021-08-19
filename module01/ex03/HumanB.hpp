/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:53:22 by nayache           #+#    #+#             */
/*   Updated: 2021/08/17 17:21:17 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public:

	HumanB(std::string name);
	void	setWeapon(Weapon& weapon);
	void	attack();

	private:

	std::string	_name;	
	Weapon*		_Weapon;
};

#endif
