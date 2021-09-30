/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:17:42 by nayache           #+#    #+#             */
/*   Updated: 2021/09/30 12:28:45 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();
	ClapTrap&	operator=(ClapTrap const & src);
	std::string	getName() const;
	void	printCharacteristics(void);
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	protected:

	std::string _name;
	int	_hitpts;
	int	_energypts;
	int	_attackdmg;
};

#endif
