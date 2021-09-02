/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayache <nayache@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:43:58 by nayache           #+#    #+#             */
/*   Updated: 2021/08/30 16:42:04 by smith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void    writeOnReplaceFile(std::ofstream& replaceFile, std::string line, std::string s1, std::string s2, unsigned int index)
{
    if (line.find(s1, index) != std::string::npos)
    {
        if (s2.size() == s1.size())
            line.replace(line.find(s1), s2.size(), s2);
        else
        {
            index = line.find(s1, index);
            line.insert(index, s2);
            line.erase(index + s2.size(), s1.size());
            index += s2.size();
        }
        return (writeOnReplaceFile(replaceFile, line, s1, s2, index));
    }
    replaceFile << line << std::endl;
}	

static bool	openReplaceFile(std::ofstream& replaceFile, std::string name)
{
	name.insert(name.size(), ".replace");
	const char *replaceFileName = name.c_str();

	replaceFile.open(replaceFileName);
	if (!replaceFileName)
	{
		std::cout << "\033[31mError: fail to open '" << replaceFileName << "'\033[0m" << std::endl;
		return (0);
	}
	return (1);
}

void	replace(std::string name, std::string s1, std::string s2)
{
	const char	*fileName = name.c_str();

	std::ifstream	file(fileName);
	std::ofstream	replaceFile;
	std::string		line;

	if (!file || !openReplaceFile(replaceFile, name))
	{
		if (file)
			file.close();
		else
			std::cout << "\033[31mError: '" << name << "' does not exist\033[0m" << std::endl;
		return ;
	}
	while (std::getline(file, line))
		writeOnReplaceFile(replaceFile, line, s1, s2, 0);
	file.close();
	replaceFile.close();
}
