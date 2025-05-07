/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:55:35 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/14 20:41:53 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";

	_function[0] = &Harl::_debug;
	_function[1] = &Harl::_info;
	_function[2] = &Harl::_warning;
	_function[3] = &Harl::_error;
}

Harl::~Harl()
{
	
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (_levels[i] == level)
		{
			(this->*(_function[i]))();
			return ;
		}
	}
}

void	Harl::_debug()
{
	std::cout << "[DEBUG] : ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do !" << std::endl;
	std::cout << std::endl;
}

void Harl::_info()
{
	std::cout << "[INFO] : ";
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger !" << std::endl; 
	std::cout << "If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void Harl::_warning()
{
	std::cout << "[WARNING] : ";
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::_error()
{
	std::cout << "[ERROR] : ";
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}