/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:39:54 by nayache           #+#    #+#             */
/*   Updated: 2021/11/02 17:45:24 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& rhs);
		~Array();
		Array&	operator=(Array<T> const& rhs);
		T&		operator[](int index) const;

		int		size() const;
		void	print() const;
	private:
		T*				_array;
		unsigned int	_size;
};

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
}

template <typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete [] this->_array;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(Array const& rhs)
{
	*this = rhs;
}

template <typename T>
Array<T>&	Array<T>::operator=(Array const& rhs)
{
	this->_size = rhs.size();
	this->_array = new T[this->_size];
	
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = rhs._array[i];
	
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](int index) const
{
	if (index < 0 || index >= this->size())
		throw std::runtime_error("\e[3;33m(Exception)Out of range error\e[0m");
	else
		return (this->_array[index]);
}

template <typename T>
int	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
void	Array<T>::print() const
{
	for (unsigned int i = 0; i < this->_size; i++)
		std::cout << '[' << this->_array[i] << ']';
	std::cout << std::endl;
}

#endif
