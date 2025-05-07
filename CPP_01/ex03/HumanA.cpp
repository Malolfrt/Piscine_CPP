/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:29:44 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/14 17:26:10 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type): _name(name), _type(type)
{
	
}

HumanA::~HumanA()
{
	
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attack with their " << this->_type.getType() << std::endl;
}