/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 07:50:38 by nayache           #+#    #+#             */
/*   Updated: 2021/10/14 09:22:41 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
	
	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	virtual	~WrongAnimal();	
	WrongAnimal&	operator=(WrongAnimal const & src);
	void	makeSound(void) const;
	std::string	getType(void)	const;
	
	protected:
	
	WrongAnimal(std::string type);
	std::string	type;
};

#endif
