/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:54:09 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 15:41:04 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	AMateria;

class	Ice : public AMateria
{
	public:
	
		Ice();	
		Ice(Ice const & src);
		std::string const & getType() const; //Returns the materia type
		AMateria* clone() const;
		~Ice();
		void use(ICharacter& target);
	
	protected:

		std::string	type;
};

#endif
