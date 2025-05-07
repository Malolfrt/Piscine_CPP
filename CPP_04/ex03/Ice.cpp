/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:36:07 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:33:51 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() 
{
	this->_type = "ice";
}

Ice::Ice(const Ice &src)
{
	this->_type = src.getType();
}

Ice&	Ice::operator=(const Ice &src)
{
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return *this;
}

Ice::~Ice()
{
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
