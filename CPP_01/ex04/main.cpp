/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:44:56 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/14 18:35:46 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	remplaceSed(std::string line, std::string oldSTR, std::string newSTR)
{
	size_t pos = 0;
	while ((pos = line.find(oldSTR, pos )) != std::string::npos)
	{
		line.erase(pos, oldSTR.length());
		line.insert(pos, newSTR);
		pos += newSTR.length();
	}
	return line;
}

int	main(int ac, char **av)
{
	std::string	line;

	if (ac != 4)
	{
		std::cout << "Wrong numbers of arguments !" << std::endl;
		return 1;
	}
	std::ifstream	ifs(av[1]);
	
	if (!ifs)
		std::cout << "Error input file cannot be read" << std::endl;

	std::string outfile = (std::string)av[1] + ".replace";
	std::ofstream ofs(outfile.c_str());
	while (std::getline(ifs, line))
	{
		std::string newLine = remplaceSed(line, (std::string)av[2], (std::string)av[3]);
		ofs << newLine << std::endl;
	}
	ifs.close();
	ofs.close();
}