/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:19:19 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/12 19:00:38 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): _name("Boris_Banal")
{

}

Zombie::Zombie(std::string name): _name(name)
{
	
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is realy dead this time..." << std::endl; 
}

void	Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}