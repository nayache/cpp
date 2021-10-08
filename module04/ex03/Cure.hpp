/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:51:45 by nayache           #+#    #+#             */
/*   Updated: 2021/10/08 11:17:59 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	AMateria;

class	Cure : public AMateria
{
	public:
	
		Cure();	
		Cure(Cure const & src);
		~Cure();
		Cure& operator=(Cure const & src);
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
	
	protected:

		std::string	type;
};

#endif
