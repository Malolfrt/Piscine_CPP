/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:13:27 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/18 19:28:47 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "Default";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap default constructor for " << name << " called" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	std::cout << "FragTrap cpy constructor for " << cpy._name << " called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor for " << this->_name << " called" << std::endl;

}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoint = src._hitPoint;
		this->_energyPoint = src._energyPoint;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

void	FragTrap::highFivesGuys() const
{
	std::cout << "FragTrap " << this->_name << " : Stop fighting and let's do a High Fives guys !!!" << std::endl;
}