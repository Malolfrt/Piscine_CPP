/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:19:09 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/12 19:05:15 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class  Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce() const;

	private:
		std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);