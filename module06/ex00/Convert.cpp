/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:32:25 by nayache           #+#    #+#             */
/*   Updated: 2021/10/27 18:29:47 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits>
#include <string>
#include <stdlib.h>

Convert::Convert()
{
}

Convert::Convert(std::string const& literal)
{
	e_type type = Convert::find_type(literal);

	this->_scientistType = UNKNOW;
	
	if (type == UNKNOW)
		return;
	if (type == SCIENTIST)
	{
		std::string const scientist[6] = {"-inff", "inff", "nanf", "-inf", "inf", "nan"};
		int i(0);
		while (i < 6)
		{
			if (literal.compare(scientist[i]) == 0)
				break;
			i++;
		}
		if (i < 3)
		{
			this->_scientistType = FLOAT;
			this->_sValue = literal.substr(0, literal.size() - 1);
		}
		else
		{
			this->_scientistType = DOUBLE;
			this->_sValue = literal.c_str();
		}
		return;
	}
	if (type == INT)
	{
		long long value;
		
		const char *arg = literal.c_str();
		value = atoll(arg);
		if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
			return;
		this->_iValue = static_cast<int>(value);
		this->_cValue = static_cast<char>(value);
		this->_fValue = static_cast<float>(value);
		this->_dValue = static_cast<double>(value);
	}
	if (type == FLOAT)
	{
		float value;
	
		const char *arg = literal.c_str();
		value = atof(arg);
		this->_fValue = static_cast<float>(value);
		this->_cValue = static_cast<char>(value);
		this->_iValue = static_cast<int>(value);
		this->_dValue = static_cast<double>(value);
	}
	if (type == DOUBLE)
	{
		double value;
	
		const char *arg = literal.c_str();
		value = static_cast<double>(atof(arg));
		this->_dValue = static_cast<double>(value);
		this->_cValue = static_cast<char>(value);
		this->_iValue = static_cast<int>(value);
		this->_fValue = static_cast<float>(value);
	}
	this->_valid = true;
}

Convert::Convert(Convert const& src)
{
	(void)src;
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

e_type	Convert::getScientistType() const
{
	return (this->_scientistType);
}

std::string	Convert::getScientist() const
{
	return (this->_sValue);
}

static bool	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

static bool	is_int(std::string const& src)
{
	int	i(0);

	if (src[0] == '-')
		i += 1;
	while (i < static_cast<int>(src.size()))
	{
		if (is_digit(src[i]) == false)
			return (false);
		i++;
	}
	return (true);
}

static bool	is_float(std::string const& src)
{
	int	pointCount(0);
	int	i(0);
	
	if (src[0] == '-')
		i += 1;
	while (i < static_cast<int>(src.size()))
	{
		if (is_digit(src[i]) == false && (src[i] != '.' && src[i] != 'f'))
			return (0);
		if (src[i] == '.')
		{
			pointCount++;
			if (pointCount > 1 || i + 1 == static_cast<int>(src.size()))
				return (false);
		}
		if (src[i] == 'f')
		{
			if (pointCount != 1 || is_digit(src[i - 1]) == false)
				return (false);
			if (i + 1 == static_cast<int>(src.size()))
				return (true);
		}
		i++;
	}
	return (false);
}

static bool	is_double(std::string const& src)
{
	int	pointCount(0);
	int	i(0);
	
	if (src[0] == '-')
		i += 1;
	while (i < static_cast<int>(src.size()))
	{
		if (is_digit(src[i]) == false && src[i] != '.')
			return (0);
		if (src[i] == '.')
		{
			pointCount++;
			if (pointCount > 1 || i + 1 == static_cast<int>(src.size()))
				return (false);
		}
		i++;
	}
	return (true);

}

static bool	is_scientist(std::string const& src)
{
	std::string const scientist[6] = {"-inff", "inff", "nanf", "-inf", "inf", "nan"};

	for (int i = 0; i < 6; i++)
		if (src.compare(scientist[i]) == 0)
			return (true);
	return (false);
}

enum type	Convert::find_type(std::string const& src)
{
	if (is_int(src) == true)
		return (INT);
	if (is_float(src) == true)
		return (FLOAT);
	if (is_double(src) == true)
		return (DOUBLE);
	if (is_scientist(src) == true)
		return (SCIENTIST);
	return (UNKNOW);
}

static std::string	doubleIsDecimal(double d)
{
	long long	n = static_cast<long long>(d);

	if (d - n == 0.0)
		return (".0");
	return("");
}

static std::string	floatIsDecimal(float f)
{
	long long	n = static_cast<long long>(f);
	
	if (f - n == 0.0f)
		return (".0f");
	return ("f");
}

static void	printAppropriateValue(Convert const& src, int type)
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
			std::cout << doubleIsDecimal(src.getFloat());
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
		else if (this->_scientistType != UNKNOW && i > 1)
		{
			std::cout << this->_sValue;
			if (i == 2)
				std::cout << "f";
		}
		else
			std::cout << "impossible";
		
		std::cout << std::endl;
	}
}
