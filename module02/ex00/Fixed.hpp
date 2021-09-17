/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:14:34 by nayache           #+#    #+#             */
/*   Updated: 2021/09/15 18:16:01 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
	public:
	
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	Fixed& operator=(Fixed const & src);

	private:

	int					_fixedValue;
	const static int	_fractBits = 8;
};

#endif
