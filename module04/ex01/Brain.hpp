/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:23:04 by nayache           #+#    #+#             */
/*   Updated: 2021/10/07 10:36:08 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain
{
	public:

	Brain();
	Brain(Brain const & src);
	~Brain();
	std::string getIdea(unsigned int index) const;
	Brain&	operator=(Brain const & src);

	private:

	std::string	_ideas[100];
};

#endif
