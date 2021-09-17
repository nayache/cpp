/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:14:34 by nayache           #+#    #+#             */
/*   Updated: 2021/09/15 17:49:13 by nayache          ###   ########.fr       */
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
	Fixed(const int src);
	Fixed(const float src);
	~Fixed();
	float	toFloat(void) const;
	int		toInt(void) const;
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	Fixed&	operator=(Fixed const & src);

	private:

	int					_fixedValue;
	const static int	_fractBits = 8;
};

std::ostream&	operator<<(std::ostream & o, Fixed const & src);

#endif
