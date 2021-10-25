/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:32:25 by nayache           #+#    #+#             */
/*   Updated: 2021/10/25 18:32:43 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits>

Convert::Convert() : _cValue(0), _iValue(0), _fValue(0), _dValue(0), _valid(false)
{
}

Convert::Convert(std::string const& literal)
{
	e_type type = Convert::find_type(literal);

	if (type == UNKNOW)
		return;
	if (type == INT)
	{
		int value;
		
		try
		{
			value = std::stoi(literal);
		}
		catch (std::out_of_range& e)
		{
			return;
		}
		this->_iValue = static_cast<int>(value);
		this->_cValue = static_cast<char>(value);
		this->_fValue = static_cast<float>(value);
		this->_dValue = static_cast<double>(value);
	}
	if (type == FLOAT)
	{
		float value;
	
		try
		{
			value = std::stof(literal);
		}
		catch (std::out_of_range& e)
		{
			return;
		}
		this->_fValue = static_cast<float>(value);
		this->_cValue = static_cast<char>(value);
		this->_iValue = static_cast<int>(value);
		this->_dValue = static_cast<double>(value);
	}
	if (type == DOUBLE)
	{
		double value;
	
		try
		{
			value = std::stod(literal);
		}
		catch (std::out_of_range& e)
		{
			return;
		}
		this->_dValue = static_cast<double>(value);
		this->_cValue = static_cast<char>(value);
		this->_iValue = static_cast<int>(value);
		this->_fValue = static_cast<float>(value);
	}
	this->_valid = true;
}

Convert::Convert(Convert const& src) : Convert()
{
	
}

Convert::~Convert()
{
}

Convert&	Convert::operator=(Convert const& src)
{
	(void)src;

	return (*this);
}

char	Convert::getChar() const
{
	return (this->_cValue);
}

int		Convert::getInteger() const
{
	return (this->_iValue);
}

float	Convert::getFloat() const
{
	return (this->_fValue);
}

double	Convert::getDouble() const
{
	return (this->_dValue);
}

bool	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	is_int(std::string const& src)
{
	int	i(0);

	if (src[0] == '-')
		i += 1;
	while (i < src.size())
	{
		if (is_digit(src[i]) == false)
			return (false);
		i++;
	}
	return (true);
}

bool	is_float(std::string const& src)
{
	int	pointCount(0);
	int	i(0);
	
	if (src[0] == '-')
		i += 1;
	while (i < src.size())
	{
		if (is_digit(src[i]) == false && (src[i] != '.' && src[i] != 'f'))
			return (0);
		if (src[i] == '.')
		{
			pointCount++;
			if (pointCount > 1 || i + 1 == src.size())
				return (false);
		}
		if (src[i] == 'f')
		{
			if (pointCount != 1 || is_digit(src[i - 1]) == false)
				return (false);
			if (i + 1 == src.size())
				return (true);
		}
		i++;
	}
	return (false);
}

bool	is_double(std::string const& src)
{
	int	pointCount(0);
	int	i(0);
	
	if (src[0] == '-')
		i += 1;
	while (i < src.size())
	{
		if (is_digit(src[i]) == false && src[i] != '.')
			return (0);
		if (src[i] == '.')
		{
			pointCount++;
			if (pointCount > 1 || i + 1 == src.size())
				return (false);
		}
		i++;
	}
	return (true);

}

enum type	Convert::find_type(std::string const& src)
{
	if (is_int(src) == true)
		return (INT);
	if (is_float(src) == true)
		return (FLOAT);
	if (is_double(src) == true)
		return (DOUBLE);
	return (UNKNOW);
}

std::string	floatIsDecimal(float f)
{
	int		n = static_cast<int>(f);
	
	if (f - n == 0.0f)
		return (".0f");
	return ("f");
}

void	printAppropriateValue(Convert const& src, int type)
{
	switch (type)
	{
		case CHAR:

			if (src.getInteger() > 127)
				std::cout << "impossible";
			else if (src.getChar() == 127 || src.getChar() < 32)
				std::cout << "Non displayable";
			else
				std::cout << "'" << src.getChar() << "'";
			break;
		
		case INT:

			if (static_cast<long long>(src.getFloat()) > std::numeric_limits<int>::max() ||
				static_cast<long long>(src.getFloat()) < std::numeric_limits<int>::min())
				std::cout << "impossible";
			else
				std::cout << src.getInteger();
			break;
		
		case FLOAT:

			std::cout << src.getFloat();
			std::cout << floatIsDecimal(src.getFloat());
			break;
		
		case DOUBLE:

			std::cout << src.getDouble();
			break;
	}
}

void	Convert::printValues(void) const
{
	const	std::string	typemsg[4] = {"char: ", "int: ", "float: ", "double: "};

	for (int i = 0; i < 4; i++)
	{
		std::cout << typemsg[i];
		
		if (this->_valid == true)
			printAppropriateValue(*this, i);
		else
			std::cout << "impossible";
		
		std::cout << std::endl;
	}
}
