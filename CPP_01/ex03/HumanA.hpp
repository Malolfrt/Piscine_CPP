/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:29:30 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/14 17:26:01 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA();
		void	attack() const;

	private:
		std::string	_name;
		Weapon	&_type;
};