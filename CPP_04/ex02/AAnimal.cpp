/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:55:34 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/10 16:01:47 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default construtor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy)
{
	std::cout << "AAnimal copy construtor called" << std::endl;
	*this = cpy;
}

AAnimal& AAnimal::operator=(const AAnimal &src)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "LOUDEST NOISE ON EARTH" << std::endl;
}

void	AAnimal::setType(std::string str)
{
	this->_type = str;
}

std::string	AAnimal::getType() const
{
	return this->_type;
}
