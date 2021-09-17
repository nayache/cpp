/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:20:00 by nayache           #+#    #+#             */
/*   Updated: 2021/09/17 18:29:34 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const float src)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(src * (1 << _fractBits));
}

Fixed::Fixed(const int src)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = src << _fractBits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
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
