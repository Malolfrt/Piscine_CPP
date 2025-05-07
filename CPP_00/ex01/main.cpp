/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:18:26 by mlefort           #+#    #+#             */
/*   Updated: 2024/07/11 15:19:34 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string str;
	PhoneBook	repertoire;

	std::cout << "Welcome into PhoneBook" << std::endl;
	std::cout << "Use ADD, SEARCH, or EXIT" << std::endl;
	while (1)
	{
		std::cout << "PhoneBook> ";
		if (!std::getline(std::cin, str))
			std::exit(1);
		if (str == "ADD")
			repertoire.add();
		else if (str == "SEARCH")
			repertoire.search();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
	return 0;
}
