/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:38:22 by nayache           #+#    #+#             */
/*   Updated: 2021/09/02 10:34:58 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	test;

	test.complain("wrong argument");
	test.complain("debug");
	test.complain("wrong argument");
	test.complain("info");
	test.complain("wrong argument");
	test.complain("warning");
	test.complain("wrong argument");
	test.complain("error");
	test.complain("");
	return (0);
}
