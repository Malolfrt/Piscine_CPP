/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:15:12 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 12:43:16 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog &cpy)
{
	std::cout << "Dog copy construtor called" << std::endl;
	this->_type = cpy.getType();
}

Dog&	Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "WAOUF WAOUF" << std::endl;
}
