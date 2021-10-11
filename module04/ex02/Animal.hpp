/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:50:38 by nayache           #+#    #+#             */
/*   Updated: 2021/10/11 07:39:02 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:

	Animal();	
	virtual ~Animal();
	Animal&	operator=(Animal const & src);
	virtual void	makeSound(void) const = 0;
	std::string	getType(void)	const;
	virtual	void	printMyIdeas(void) const;
	
	protected:
	
	Animal(std::string type);
	std::string	type;

	private:

	Animal(Animal const & src);
};

#endif
