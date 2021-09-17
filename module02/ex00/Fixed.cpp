/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:20:00 by nayache           #+#    #+#             */
/*   Updated: 2021/09/15 18:23:43 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor constructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

Fixed& Fixed::operator=(Fixed const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = src.getRawBits();
	return (*this);
}
