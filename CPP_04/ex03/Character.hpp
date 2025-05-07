/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:39:00 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:26:22 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(const Character &src);
		Character& operator=(const Character &src);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
	private:
		std::string _name;
		AMateria	*_items[4];
		AMateria	*_lost_items[4];
};