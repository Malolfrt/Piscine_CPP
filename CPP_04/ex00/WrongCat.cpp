/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:14:16 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 14:07:04 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat&	WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WRONG SOUND FROM WRONGCAT" << std::endl;
}