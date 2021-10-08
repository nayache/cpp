/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:45:04 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 11:41:43 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class	AMateria
{
	public:
	
		AMateria();	
		AMateria(std::string const & type);
		AMateria(AMateria const & type);
		AMateria& operator=(AMateria const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual	~AMateria();
		virtual void use(ICharacter& target);
	
	protected:

		std::string	type;
};

#endif
