/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:51:45 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 11:11:04 by nayache          ###   ########.fr       */
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
		~Ice();
		Ice& operator=(Ice const & src);
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
	
	protected:

		std::string	type;
};

#endif
