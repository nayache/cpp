/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:10:59 by nayache           #+#    #+#             */
/*   Updated: 2021/10/19 12:25:59 by nayache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("shrubbery creation", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : Form(src), _target(src._target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	(void)src;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& src) const
{
	this->Form::execute(src);
	if (this->getSigned() == false || src.getGrade() > this->getRequiredToExec())
		return;
	
	std::string tmp = this->_target + "_shrubbery";
	const char *nameFile = tmp.c_str();
	std::ofstream	file;

	file.open(nameFile, std::ofstream::out);
	if (file.is_open())
	{
		file << "\e[3;38mby " << src.getName() << "\e[0m" << std::endl;
		file << "\033[32m";
		file << "                 # #### ####                            # #### ####" << std::endl;
		file << "              ### \\/#|### |/####                    ### \\/#|### |/####" << std::endl;
		file << "             ##\\/#/ \\||/##/_/##/_#                 ##\\/#/ \\||/##/_/##/_#" << std::endl;
		file << "           ###  \\/###|/ \\/ # ###                 ###  \\/###|/ \\/ # ###" << std::endl;
		file << "         ##_\\_#\\_\\## | #/###_/_####            ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		file << "        ## #### # \\ #| /  #### ##/##          ## #### # \\ #| /  #### ##/##" << std::endl;
		file << "         __#_--###`\\ |{,###---###-~            __#_--###`\\ |{,###---###-~" << std::endl;
		file << "\033[0m\033[30m";
		file << "                    }}{                                   }}{" << std::endl;
		file << "                    }}{                                   }}{" << std::endl;
		file << "                    }}{                                   }}{" << std::endl;
		file << "                    }}{                                   }}{\033[1;31m       O\033[30m   " << std::endl;
		file << "                    }}{                                   }{{" << std::endl;
		file << "                    }}{                                   }}{" << std::endl;
		file << "                    {{}                                   {{}" << std::endl;
		file << "\033[0m\033[32m";
		file << "              , -=-~{ .-^- _                        , -=-~{ .-^- _\033[0m" << std::endl;
		file.close();
	}
	else
		std::cout << "\e[3;31mopen file failed\e[0m" << std::endl;
}
