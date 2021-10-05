/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:31:33 by nayache           #+#    #+#             */
/*   Updated: 2021/10/05 14:13:31 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class 	DiamondTrap : public ScavTrap, public FragTrap
{
	public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();
	DiamondTrap&	operator=(DiamondTrap const & src);
	void	whoAmI();
	using	ScavTrap::attack;
	
	private:

	std::string	_name;		
};

#endif
