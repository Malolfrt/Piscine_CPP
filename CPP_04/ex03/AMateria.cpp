/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:39:56 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:32:42 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("fire")
{
}

AMateria::AMateria(const AMateria &src)
{
	this->_type = src._type;
}

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria&	AMateria::operator=(const AMateria &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

AMateria::~AMateria()
{
}

std::string const&	AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* " << this->_type << " burn the hell out of" << target.getName() << " *" << std::endl;
}