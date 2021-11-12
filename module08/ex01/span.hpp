/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:21:08 by nayache           #+#    #+#             */
/*   Updated: 2021/11/09 16:25:11 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <list>
# include <vector>

class	Span
{
	public:
		Span(int n);
		Span(Span const& src);
		~Span();
		Span&	operator=(Span const& src);

		void	addNumber(int value);
		
		template <class Iterator>
		void	addNumber(Iterator begin, Iterator end);
		
		int		size(void) const;
		int		size_max(void) const;
		int		getMin(void) const;
		int		getMax(void) const;

		int		shortestSpan(void) const;
		int		longestSpan(void) const;

	private:
		std::vector<int>	_lst;
		int					_size_max;
		int					_size;

		Span();

};

template <class Iterator>
void	Span::addNumber(Iterator begin, Iterator end)
{
	for (int i = 0; begin != end && i < this->_size_max; i++)
	{
		this->_lst[i] = *begin;
		begin++;
	}
}

#endif
