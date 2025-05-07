/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:22:19 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/10 15:30:19 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat copy construtor called" << std::endl;
	this->_type = cpy.getType();
	this->_brain = new Brain(*(cpy._brain));
}

Cat&	Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
		this->_brain = new Brain(*(src._brain));
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}
