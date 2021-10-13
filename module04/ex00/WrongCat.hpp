/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:54:47 by nayache           #+#    #+#             */
/*   Updated: 2021/10/13 12:30:21 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(WrongCat const & src);
	~WrongCat();
	WrongCat&	operator=(WrongCat const & src);	
	virtual void	makeSound(void)	const;
};

#endif
