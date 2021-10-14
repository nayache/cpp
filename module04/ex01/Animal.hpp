/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:50:38 by nayache           #+#    #+#             */
/*   Updated: 2021/10/14 09:33:15 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
	
	Animal();
	Animal(Animal const & src);
	virtual	~Animal();	
	Animal&	operator=(Animal const & src);
	virtual void	makeSound(void) const;
	std::string	getType(void)	const;
	virtual void	printMyIdeas() const;
	
	protected:
	
	Animal(std::string type);
	std::string	type;
};

#endif
