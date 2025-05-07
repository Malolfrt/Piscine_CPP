/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:15:12 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 18:18:19 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::Dog(const Dog &cpy)
{
	std::cout << "Dog copy construtor called" << std::endl;
	this->_type = cpy.getType();
	this->_brain = new Brain(*(cpy._brain));
	
}

Dog&	Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
		this->_brain = new Brain(*(src._brain));
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "WAOUF WAOUF" << std::endl;
}
