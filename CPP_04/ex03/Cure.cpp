/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:36:42 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:33:32 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() 
{
	this->_type = "cure";
}

Cure::Cure(const Cure &src)
{
	this->_type = src.getType();
}

Cure&	Cure::operator=(const Cure &src)
{
	if (this != &src)
	{
		this->_type = src.getType();
	}
	return *this;
}

Cure::~Cure()
{
}
AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}