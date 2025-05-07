/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:39:14 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:33:17 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("DIDIER")
{
	for (int i = 0; i < 4; i++)
	{
		this->_items[i] = NULL;
		this->_lost_items[i] = NULL;
	}
}

Character::Character(const Character &src)
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		this->_items[i] = NULL;
		this->_lost_items[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		if (src._items[i] != NULL)
			this->_items[i] = src._items[i]->clone();
		else
			this->_items[i] = NULL;
	}
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_items[i] = NULL;
		this->_lost_items[i] = NULL;
	}
}

Character&	Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_items[i] != NULL)
			{
				delete this->_items[i];
				this->_items[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (src._items[i] != NULL)
			{
				if (src._items[i]->getType() == "ice")
					this->_items[i] = new Ice((Ice&)src._items[i]);
				else
					this->_items[i] = new Cure((Cure&)src._items[i]);
			}
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_lost_items[i])
			delete this->_lost_items[i];
		this->_lost_items[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i])
			delete this->_items[i];
		this->_items[i] = NULL;
	}
}

std::string const& Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	int	i = 0;
	while (i < 4 && this->_items[i])
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << " has too many items" << std::endl;
		return ;
	}
	this->_items[i] = m;
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || this->_items[idx])
	{
		std::cout << this->_name << " you try to unequip nothingless" << std::endl;
		return ;
	}
	std::cout << this->_name << " unequip " << this->_items[idx] << std::endl;
	int j = 0;
	while (this->_lost_items[j])
		j++;
	if (j < 4)
	{
		this->_lost_items[j] = this->_items[idx];
		this->_items[idx] = NULL;
	}
	else
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i] == NULL && i != 3)
		{
			this->_items[i] = this->_items[i + 1];
			this->_items[i + 1] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || this->_items[idx] == NULL)
	{
		std::cout << this->_name << " you try to use nothingless" << std::endl;
		return ;
	}
	this->_items[idx]->use(target);
	return ;
}