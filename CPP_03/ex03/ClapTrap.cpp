/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:07:42 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/18 20:11:34 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor for " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor for the name " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "ClapTrap copy constructor for " << cpy._name << " called" << std::endl;
    *this = cpy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor for " << this->_name << " called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &src)
    {
        this->_name = src._name;
        this->_hitPoint = src._hitPoint;
        this->_energyPoint = src._energyPoint;
        this->_attackDamage = src._attackDamage;
    }
    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoint > 0 && this->_hitPoint > 0)
    {
        std::cout << "CalpTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
        this->_energyPoint--;
    }
    else if (this->_energyPoint == 0)
        std::cout << "ClapTrap " << this->_name << " cannot attack " << target << " because his energy point is at 0" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " cannot attack " << target << " because he has not enough hit point" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)this->_hitPoint > amount)
        this->_hitPoint -= amount;
    else if (this->_hitPoint > 0)
        this->_hitPoint = 0;
    else
    {
        std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " was attacked and lost " << amount << " hit points, now his hit point are " << this->_hitPoint << std::endl; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoint > 0 && this->_hitPoint > 0 && (this->_hitPoint + amount) <= 10)
    {
        this->_hitPoint += amount;
        std::cout << "ClapTrap " << this->_name << " repaired himself with " << amount << " amount of points, he has now " << this->_hitPoint << " hit points" << std::endl;
        this->_energyPoint--;
    }
    else if (this->_energyPoint == 0)
        std::cout << "ClapTrap " << this->_name << " cannot repaired himself because his energy points are at " << this->_energyPoint << std::endl;
    else if (this->_hitPoint == 0)
        std::cout << "ClapTrap " << this->_name << " cannot repaired himself because his hit points are at " << this->_hitPoint << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " can't be repaired to have more than 10 hit points" << std::endl;

}