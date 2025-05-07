/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:01:43 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 13:13:44 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = cpy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this  != &src)
	{
		this->_type = src.getType();
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WRONGEST SOUND IN THE WORLD" << std::endl;
}

void	WrongAnimal::setType(std::string str)
{
	this->_type = str;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}

