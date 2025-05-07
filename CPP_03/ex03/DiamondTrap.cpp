/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:35:21 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/18 20:06:00 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name("Default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name = "Default_clap_name";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	std::cout << "DiamondTrap default constructor for " << this->_name << " called" << std::endl;
	ClapTrap::_name = (name + "_clap_name");
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy)
{
	std::cout << "DiamondTrap cpy constructor for " << cpy._name << " called" << std::endl;
	*this = cpy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor for " << this->_name << " called" << std::endl;
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap " << this->_name << " who am I ? I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl; 
}
