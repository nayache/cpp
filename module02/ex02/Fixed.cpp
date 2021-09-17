/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:20:00 by nayache           #+#    #+#             */
/*   Updated: 2021/09/17 19:00:08 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	_fixedValue = 0;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(const float src)
{
	this->_fixedValue = roundf(src * (1 << _fractBits));
}

Fixed::Fixed(const int src)
{
	this->_fixedValue = src << _fractBits;
}

Fixed::~Fixed()
{

}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixedValue);
}

Fixed& Fixed::operator=(Fixed const & src)
{
	this->_fixedValue = src.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& o, Fixed const & src)
{
	o << src.toFloat();
	return (o);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedValue / (float)(1 << _fractBits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedValue >> _fractBits);
}

bool	Fixed::operator>(Fixed const & src) const
{
	return (this->_fixedValue > src.getRawBits());
}

bool	Fixed::operator<(Fixed const & src) const
{
	return (this->_fixedValue < src.getRawBits());
}

bool	Fixed::operator<=(Fixed const & src) const
{
	return (this->_fixedValue <= src.getRawBits());
}

bool	Fixed::operator>=(Fixed const & src) const
{
	return (this->_fixedValue >= src.getRawBits());
}

bool	Fixed::operator==(Fixed const & src) const
{
	return (this->_fixedValue == src.getRawBits());
}

bool	Fixed::operator!=(Fixed const & src) const
{
	return (this->_fixedValue != src.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & src)
{
	return (Fixed(this->_fixedValue + src.getRawBits()));
}

Fixed	Fixed::operator-(Fixed const & src)
{
	return (Fixed(this->_fixedValue - src.getRawBits()));
}

Fixed	Fixed::operator*(Fixed const & src)
{
	Fixed result;

	result.setRawBits((long)((long)this->getRawBits() * (long)src.getRawBits()) >> _fractBits);
	return (result);
}

Fixed	Fixed::operator/(Fixed const & src)
{
	Fixed result;

	result.setRawBits((this->getRawBits() << _fractBits) / src.getRawBits());
	return (result);
}

Fixed	Fixed::operator++(void)
{
	this->_fixedValue += 1;

	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	++*this;
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	this->_fixedValue -= 1;

	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	--*this;
	return (tmp);
}

Fixed& min(Fixed& src, Fixed& src2)
{
	if (src < src2)
		return (src);
	return (src2);
}

Fixed& max(Fixed& src, Fixed& src2)
{
	if (src > src2)
		return (src);
	return (src2);
}
Fixed const & Fixed::min(Fixed const & src, Fixed const & src2)
{
	if (src < src2)
		return (src);
	return (src2);
}

Fixed const & Fixed::max(Fixed const & src, Fixed const & src2)
{
	if (src > src2)
		return (src);
	return (src2);
}
