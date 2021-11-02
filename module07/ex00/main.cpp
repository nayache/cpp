/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:43:12 by nayache           #+#    #+#             */
/*   Updated: 2021/11/02 13:27:33 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tfunc.cpp"
#include <iostream>
#include <stdlib.h>

int	main(void)
{
	double a = 21.2, b = 31.8;
	float c = 21.2f, d = 31.8f;
	int e = 21, f = 31;

	std::cout << "min value between " << a << " & "  << b << "-> " << min(a, b) << std::endl;
	std::cout << "min value between " << c << " & "  << d << "-> " << min(c, d) << std::endl;
	std::cout << "min value between " << e << " & "  << f << "-> " << min(e, f) << std::endl;
	std::cout << "max value between " << a << " & "  << b << "-> " << max(a, b) << std::endl;
	std::cout << "max value between " << c << " & "  << d << "-> " << max(c, d) << std::endl;
	std::cout << "max value between " << e << " & "  << f << "-> " << max(e, f) << std::endl;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(&a, &b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	swap(&c, &d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	
	std::cout << "e = " << e << ", f = " << f << std::endl;
	swap(&e, &f);
	std::cout << "e = " << e << ", f = " << f << std::endl;

return (0);
}
