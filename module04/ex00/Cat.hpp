/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:54:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 08:58:29 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class	Cat : public Animal
{
	public:

	Cat();
	Cat(Cat const & src);
	~Cat();
	Cat&	operator=(Cat const & src);	
	virtual void	makeSound(void)	const;
};

#endif
