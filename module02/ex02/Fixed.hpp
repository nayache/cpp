/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:14:34 by nayache           #+#    #+#             */
/*   Updated: 2021/09/17 16:30:02 by nayache          ###   ########.fr       */
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
	Fixed	operator+(Fixed const & src);
	Fixed	operator-(Fixed const & src);
	Fixed	operator*(Fixed const & src);
	Fixed	operator/(Fixed const & src);
	Fixed	operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(void);
	Fixed	operator--(int);
	bool	operator>(Fixed const & src) const;
	bool	operator<(Fixed const & src) const;
	bool	operator<=(Fixed const & src) const;
	bool	operator>=(Fixed const & src) const;
	bool	operator==(Fixed const & src) const;
	bool	operator!=(Fixed const & src) const;

	static Fixed &max(Fixed& src, Fixed& src2);
	static Fixed &min(Fixed& src, Fixed& src2);
	static Fixed const & min(Fixed const & src, Fixed const & src2);
	static Fixed const & max(Fixed const & src, Fixed const & src2);

	private:

	int					_fixedValue;
	const static int	_fractBits = 8;
};

std::ostream&	operator<<(std::ostream & o, Fixed const & src);
//static Fixed const &min(Fixed& src, Fixed const & src2);
//static Fixed const &max(Fixed& src, Fixed const & src2);

#endif
