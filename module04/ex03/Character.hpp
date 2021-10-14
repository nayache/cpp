/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:18:37 by nayache           #+#    #+#             */
/*   Updated: 2021/10/14 09:44:08 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		
		Character();
		Character(std::string name);
		Character(Character const & src);
		~Character();
		Character&	operator=(Character const & src);
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		void	printInventory(int index) const;
	
	private:

		AMateria*	_inventory[4];
		std::string	_name;
};

#endif
