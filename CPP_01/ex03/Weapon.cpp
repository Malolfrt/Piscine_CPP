/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:29:14 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/14 16:45:11 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): _type("bare Hand")
{
	
}

Weapon::Weapon(std::string type): _type(type)
{
	
}

Weapon::~Weapon()
{
	
}

const std::string	Weapon::getType()
{
	return this->_type;
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}
