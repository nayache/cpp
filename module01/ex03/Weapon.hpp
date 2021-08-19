/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:09:49 by nayache           #+#    #+#             */
/*   Updated: 2021/08/17 17:04:30 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	public:

	Weapon();
	Weapon(std::string type);
	const std::string&	getType(void)	const;
	void				setType(std::string);

	private:

	std::string	_type;
};

#endif
