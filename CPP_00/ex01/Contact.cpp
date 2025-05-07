/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:18:45 by mlefort           #+#    #+#             */
/*   Updated: 2024/07/11 15:26:20 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

void Contact::print_contact()
{
	std::cout << "First Name : " << this->_first_name << std::endl;
	std::cout << "Last Name : " << this->_last_name << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone Number : " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->_darkest_secret << std::endl;
}
void Contact::set_new_contact()
{
	this->_set_first_name();
	this->_set_last_name();
	this->_set_nickname();
	this->_set_phone_number();
	this->_set_darkest_secret();
}

std::string Contact::get_first_name()
{
	return _first_name;
}

std::string Contact::get_last_name()
{
	return _last_name;
}

std::string Contact::get_nickname()
{
	return _nickname;
}

void Contact::_set_first_name()
{
	std::string str;

	while (1)
	{
		std::cout << "first_name : ";
		if (!std::getline(std::cin, str))
			std::exit(1);
		if (!str.empty())
			break ;
	}
	this->_first_name = str;
}

void Contact::_set_last_name()
{
	std::string str;

	while (1)
	{
		std::cout << "last_name : ";
		if (!std::getline(std::cin, str))
			std::exit(1);
		if (!str.empty())
			break ;
	}
	this->_last_name = str;
}

void Contact::_set_nickname()
{
	std::string str;

	while (1)
	{
		std::cout << "nickname : ";
		if (!std::getline(std::cin, str))
			std::exit(1);
		if (!str.empty())
			break ;
	}
	this->_nickname = str;
}

void Contact::_set_phone_number()
{
	std::string str;

	while (1)
	{
		std::cout << "phone_number : ";
		if (!std::getline(std::cin, str))
			std::exit(1);
		if (!str.empty())
			break ;
	}
	this->_phone_number = str;
}

void Contact::_set_darkest_secret()
{
	std::string str;

	while (1)
	{
		std::cout << "darkest_secret : ";
		if (!std::getline(std::cin, str))
			std::exit(1);
		if (!str.empty())
			break ;
	}
	this->_darkest_secret = str;
}
