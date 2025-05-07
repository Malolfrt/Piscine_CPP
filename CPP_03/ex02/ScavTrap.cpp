/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:04:27 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/18 19:00:43 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): _gateKeeperMode(false)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "Default";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name): _gateKeeperMode(false)
{
    std::cout << "ScavTrap default constructor for " << this->_name << " called" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	std::cout << "ScavTrap copy constructor for " << cpy._name << "called" << std::endl;
	*this = cpy;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDamage = src._attackDamage;
		this->_gateKeeperMode = src._gateKeeperMode; 
	}
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor for " << this->_name << " called" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoint > 0 && this->_hitPoint > 0)
    {
        std::cout << "ScavTrap "<< this->_name << " attack in the name of the Lord " << target << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
        this->_energyPoint--;
    }
    else if (this->_energyPoint == 0)
        std::cout << "ScavTrap " << this->_name << " cannot attack " << target << " because his energy point is at 0" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " cannot attack " << target << " because he has not enough hit point" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->_gateKeeperMode == false)
	{
		std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper Mode !!!!" << std::endl;
		this->_gateKeeperMode = true;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already in Gate Keeper Mode" << std::endl;
}
