/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:35:47 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:41:45 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
    	this->_items[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (src._items[i] != NULL)
				this->_items[i] = src._items[i]->clone();
		}
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
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
				this->_items[i] = src._items[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i])
			delete this->_items[i];
		this->_items[i] = NULL;
	}
}

void	MateriaSource::learnMateria(AMateria *src)
{
	if (!src)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_items[i])
		{
			this->_items[i] = src;
			return ;
		}
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i] && type == this->_items[i]->getType())
			return this->_items[i]->clone();;
	}
	return NULL;
}