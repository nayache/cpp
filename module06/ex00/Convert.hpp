/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:27:04 by nayache           #+#    #+#             */
/*   Updated: 2021/10/27 14:15:03 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

typedef	enum	type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SCIENTIST,
	UNKNOW
}				e_type;

class	Convert
{
	public:
		
		Convert(std::string const& literal);
		Convert(Convert const& src);
		~Convert();
		Convert&	operator=(Convert const& src);
		
		char	getChar() const;
		int		getInteger() const;
		float	getFloat() const;
		double	getDouble() const;
		std::string	getScientist() const;
		e_type	getScientistType() const;
	
		enum type	find_type(std::string const& src);
		void	printValues(void) const;
	
	private:

		Convert();
		char		_cValue;
		int			_iValue;
		float		_fValue;
		double		_dValue;
		std::string	_sValue;
		e_type		_scientistType;
		bool		_valid;
};

#endif
