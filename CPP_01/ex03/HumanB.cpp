/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:30:16 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/14 17:37:24 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _type(NULL)
{

}

HumanB::~HumanB()
{

}

void	HumanB::attack() const
{
	std::cout << this->_name << " attack with their " << this->_type->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_type = &type;
}