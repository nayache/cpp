/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:51:29 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 08:51:33 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class AMateria;

class	Cure : public AMateria
{
	public:
	
		Cure();	
		Cure(Cure const & src);
		std::string const & getType() const; //Returns the materia type
		AMateria* clone() const;
		~Cure();
		void use(ICharacter& target);
	
	protected:

		std::string	type;
};

#endif
