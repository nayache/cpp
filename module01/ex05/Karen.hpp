/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:38:52 by nayache           #+#    #+#             */
/*   Updated: 2021/09/02 10:31:48 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Karen
{
	public:
	
	void	complain(std::string level);

	private :

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};
