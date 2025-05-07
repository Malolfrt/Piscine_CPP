/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:22:19 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 12:43:26 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat copy construtor called" << std::endl;
	this->_type = cpy.getType();
}

Cat&	Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}
