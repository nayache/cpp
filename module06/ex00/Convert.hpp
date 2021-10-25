/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:27:04 by nayache           #+#    #+#             */
/*   Updated: 2021/10/25 18:15:56 by nayache          ###   ########.fr       */
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
	UNKNOW
}				e_type;

class	Convert
{
	public:
		
		Convert();
		Convert(std::string const& literal);
		Convert(Convert const& src);
		~Convert();
		Convert&	operator=(Convert const& src);
		
		char	getChar() const;
		int		getInteger() const;
		float	getFloat() const;
		double	getDouble() const;
	
		enum type	find_type(std::string const& src);
		void	printValues(void) const;
	
	private:

		char	_cValue;
		int		_iValue;
		float	_fValue;
		double	_dValue;
		bool	_valid;
};

#endif
