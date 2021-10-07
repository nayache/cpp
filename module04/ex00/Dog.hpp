/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:54:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 08:58:37 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class	Dog : public Animal
{
	public:

	Dog();
	Dog(Dog const & src);
	~Dog();
	Dog&	operator=(Dog const & src);	
	virtual void	makeSound(void)	const;
};

#endif
