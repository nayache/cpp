/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:05:25 by nayache           #+#    #+#             */
/*   Updated: 2021/10/12 16:04:32 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat alain("alain", -1);
	Bureaucrat robert("robert", 30);
	Form novice("novice", 249, 60);
	Form advanced("advanced", 60, 60);
	Form expert("expert", 10, 60);

	std::cout << alain << std::endl;
	std::cout << robert << std::endl;
	std::cout << novice << std::endl;
	std::cout << advanced << std::endl;
	std::cout << expert << std::endl;
	alain.signForm(novice);
	alain.signForm(advanced);
	alain.signForm(expert);
	robert.signForm(novice);
	robert.signForm(advanced);
	robert.signForm(expert);
	return (0);
}
