/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:54:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 10:21:14 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:

	Dog();
	Dog(Dog const & src);
	~Dog();
	Dog&	operator=(Dog const & src);	
	virtual void	makeSound(void)	const;
	virtual	void	printMyIdeas(void) const;

	private:

	Brain*	_brain;
};

#endif
