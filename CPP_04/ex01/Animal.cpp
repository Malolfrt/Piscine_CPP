/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:55:34 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 13:09:05 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default construtor called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy construtor called" << std::endl;
	*this = cpy;
}

Animal& Animal::operator=(const Animal &src)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "LOUDEST NOISE ON EARTH" << std::endl;
}

void	Animal::setType(std::string str)
{
	this->_type = str;
}

std::string	Animal::getType() const
{
	return this->_type;
}
