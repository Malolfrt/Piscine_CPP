/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:18:32 by mlefort           #+#    #+#             */
/*   Updated: 2024/07/11 15:33:32 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>
#include <cstdlib>

PhoneBook::PhoneBook() : _Nbcontact(0), _empty(0)
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add()
{
	if (_Nbcontact > 7)
	{
		_empty = 1;
		_Nbcontact = 0;
	}
	this->_user[_Nbcontact].set_new_contact();
	_Nbcontact++;
	if (_empty == 1)
		std::cout << "New contact add [8/8]" << std::endl;
	else
		std::cout << "New contact add [" << _Nbcontact << "/8]"  <<std::endl;

}

std::string PhoneBook::_print_good(std::string str)
{
	std::string tmp;
	tmp = str;
	if (tmp.length() > 10)
	{
		tmp.replace(9, 1, ".");
		tmp.erase(10);
	}
	else if (tmp.length() < 10)
			tmp.insert(0, 10 - tmp.length(), ' ');
	for (int i = 0; i < 10; i++)
	{
		if (tmp[i] == '\t')
			tmp[i] = ' ';
	}
	return (tmp);	
}

void PhoneBook::search()
{
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 1; i <= 8; i++)
	{
		std::cout << "|         " << i;
		std::cout << "|" << _print_good(_user[i - 1].get_first_name());
		std::cout << "|" << _print_good(_user[i - 1].get_last_name());
		std::cout << "|" << _print_good(_user[i - 1].get_nickname());
		std::cout << "|" << std::endl;
	}
	if (_Nbcontact == 0 && _empty == 0)
	{
		return ;
	}
	else
	{
		std::cout << std::endl;
		unsigned int index;
		std::string input;
		while (1)
		{
			index = 0;
			std::cout << "Enter index : ";
			if (!std::getline(std::cin, input))
				std::exit(1);
			if (input.empty() || input.length() > 1 || !_is_number(input))
			{
				std::cout << "Invalid index." << std::endl;
				continue ;
			}
			std::stringstream ss(input);
			ss >> index;
			if (index > 8 || index == 0)
			{
				std::cout << "Invalid index. Please enter a number between 1 and 8." << std::endl;
				continue;
			}
			else 
				break;
		}
		std::cout << std::endl << "searching contact's informations" << std::endl;
		this->_user[index - 1].print_contact();
	}
}

int	PhoneBook::_is_number(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
	}
	return 1;
}

