/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:23:11 by nayache           #+#    #+#             */
/*   Updated: 2021/11/03 16:39:56 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <stdexcept>
#include <cstdlib>
#include <iostream>

Span::Span(int n) : _size_max(n), _size(0)
{
}

Span::~Span()
{
}

Span::Span(Span const& src) : _size_max(src.size_max()), _size(src.size())
{
	this->_lst.clear();
	this->_lst = src._lst;
}

Span&	Span::operator=(Span const& src)
{
	this->_size_max = src.size_max();
	this->_size = src.size();
	this->_lst.clear();
	this->_lst = src._lst;

	return (*this);
}

int	Span::size(void) const
{
	return (this->_size);
}

int	Span::size_max(void) const
{
	return (this->_size_max);
}

int	Span::getMax() const
{
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = this->_lst.end();

	int	max = this->_lst[0];
	
	for (it = this->_lst.begin(); it != ite; it++)
		max = *it > max ? *it : max;
	return (max);
}
	
int	Span::getMin() const
{
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = this->_lst.end();
	
	int	min = this->_lst[0];
	
	for (it = this->_lst.begin(); it != ite; it++)
		min = *it < min ? *it : min;
	return (min);
}

void	Span::addNumber(int number)
{
	if (this->_size == this->_size_max)
		throw std::runtime_error("\e[33mError: Cant add new number, container is full\e[0m");
	else
	{
		this->_lst.push_back(number);
		this->_size++;
	}
}

int		Span::shortestSpan(void) const
{
	if (this->_size < 2)
		throw std::runtime_error("\e[33mError: Must have more than one number saved for use shortestSpan()\e[0m");
	
	int span = std::abs(this->_lst[0] - this->_lst[1]);
	int	shortest = span;

	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = this->_lst.end();
	
	for (it = this->_lst.begin(); (it + 1) != ite; it++)
	{
		span = std::abs(*it - *(it + 1));
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}

int		Span::longestSpan(void) const
{
	if (this->_size < 2)
		throw std::runtime_error("\e[33mError: Must have more than one number saved for use longestSpan()\e[0m");
	
	int	min = this->getMin();
	int	max = this->getMax();

	return (max - min);
}
